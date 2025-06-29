import json
import datetime

with open("quotes.json", "r") as f:
    quotes = json.load(f)

index = datetime.datetime.utcnow().timetuple().tm_yday % len(quotes)
quote = quotes[index]

with open("README.md", "r") as f:
    content = f.read()

start = "<!--QUOTE_START-->"
end = "<!--QUOTE_END-->"
before = content.split(start)[0]
after = content.split(end)[1]
new_section = f"{start}{quote}{end}"

with open("README.md", "w") as f:
    f.write(before + new_section + after)
