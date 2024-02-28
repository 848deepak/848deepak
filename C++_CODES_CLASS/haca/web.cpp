#include <iostream>
#include <boost/asio.hpp>

using namespace std;
using namespace boost::asio;
using namespace boost::asio::ip;

class HttpServer {
public:
    HttpServer(io_service& service, short port)
        : acceptor_(service, tcp::endpoint(tcp::v4(), port)), socket_(service) {
        startAccept();
    }

private:
    void startAccept() {
        acceptor_.async_accept(socket_, [this](boost::system::error_code ec) {
            if (!ec) {
                cout << "Client connected" << endl;
                handleRequest();
            }
            startAccept();
        });
    }

    void handleRequest() {
        auto self(shared_from_this());
        socket_.async_read_some(buffer(data_, max_length), [this, self](boost::system::error_code ec, std::size_t length) {
            if (!ec) {
                cout << "Received request: " << string(data_, length) << endl;
                // Respond with a simple HTTP response
                const char* response = "HTTP/1.1 200 OK\r\nContent-Length: 13\r\n\r\nHello, World!";
                async_write(socket_, buffer(response, 45), [this, self](boost::system::error_code ec, std::size_t /*length*/) {
                    if (!ec) {
                        cout << "Response sent" << endl;
                    }
                });
            }
        });
    }

    tcp::acceptor acceptor_;
    tcp::socket socket_;
    enum { max_length = 1024 };
    char data_[max_length];
};

int main() {
    try {
        io_service service;
        HttpServer server(service, 8080);
        service.run();
    } catch (exception& e) {
        cerr << "Exception: " << e.what() << endl;
    }
    return 0;
}
