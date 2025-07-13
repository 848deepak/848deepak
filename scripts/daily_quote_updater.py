#!/usr/bin/env python3
"""
Daily Quote Updater for GitHub Profile README
Updates the "Final Thought" section with a new inspirational quote each day.
"""

import re
import hashlib
from datetime import datetime
from pathlib import Path

class DailyQuoteUpdater:
    def __init__(self):
        self.quotes = [
            # Tech & Innovation Quotes
            "The best way to predict the future is to invent it. - Alan Kay",
            "Technology is best when it brings people together. - Matt Mullenweg", 
            "Innovation distinguishes between a leader and a follower. - Steve Jobs",
            "The only way to make sense out of change is to plunge into it, move with it, and join the dance. - Alan Watts",
            "Code is like humor. When you have to explain it, it's bad. - Cory House",
            "First, solve the problem. Then, write the code. - John Johnson",
            "Experience is the name everyone gives to their mistakes. - Oscar Wilde",
            "In order to be irreplaceable, one must always be different. - Coco Chanel",
            "The future belongs to those who believe in the beauty of their dreams. - Eleanor Roosevelt",
            "Programs must be written for people to read, and only incidentally for machines to execute. - Harold Abelson",
            
            # Learning & Growth Quotes
            "Learning never exhausts the mind. - Leonardo da Vinci",
            "The only source of knowledge is experience. - Albert Einstein",
            "Stay hungry, stay foolish. - Steve Jobs",
            "Every expert was once a beginner. - Helen Hayes",
            "Don't be afraid to give up the good to go for the great. - John D. Rockefeller",
            "Success is not final, failure is not fatal: it is the courage to continue that counts. - Winston Churchill",
            "The way to get started is to quit talking and begin doing. - Walt Disney",
            "Don't let yesterday take up too much of today. - Will Rogers",
            "It's not whether you get knocked down, it's whether you get up. - Vince Lombardi",
            "The expert in anything was once a beginner. - Helen Hayes",
            
            # Collaboration & Community Quotes
            "Alone we can do so little; together we can do so much. - Helen Keller",
            "If you want to go fast, go alone. If you want to go far, go together. - African Proverb",
            "Great things in business are never done by one person. They're done by a team of people. - Steve Jobs",
            "Coming together is a beginning; keeping together is progress; working together is success. - Henry Ford",
            "The strength of the team is each individual member. The strength of each member is the team. - Phil Jackson",
            "Unity is strength... when there is teamwork and collaboration, wonderful things can be achieved. - Mattie Stepanek",
            "Individual commitment to a group effort—that is what makes a team work, a company work, a society work, a civilization work. - Vince Lombardi",
            "Talent wins games, but teamwork and intelligence win championships. - Michael Jordan",
            "The whole is greater than the sum of its parts. - Aristotle",
            "None of us is as smart as all of us. - Ken Blanchard",
            
            # Problem Solving & Creativity Quotes
            "Every problem is an opportunity in disguise. - John Adams",
            "The significant problems we face cannot be solved at the same level of thinking we were at when we created them. - Albert Einstein",
            "Creativity is intelligence having fun. - Albert Einstein",
            "The best error message is the one that never shows up. - Thomas Fuchs",
            "Simplicity is the ultimate sophistication. - Leonardo da Vinci",
            "Any fool can write code that a computer can understand. Good programmers write code that humans can understand. - Martin Fowler",
            "Debugging is twice as hard as writing the code in the first place. Therefore, if you write the code as cleverly as possible, you are, by definition, not smart enough to debug it. - Brian Kernighan",
            "Talk is cheap. Show me the code. - Linus Torvalds",
            "There are only two hard things in Computer Science: cache invalidation and naming things. - Phil Karlton",
            "Programming isn't about what you know; it's about what you can figure out. - Chris Pine",
            
            # Motivation & Success Quotes
            "The only impossible journey is the one you never begin. - Tony Robbins",
            "Success is walking from failure to failure with no loss of enthusiasm. - Winston Churchill",
            "Don't watch the clock; do what it does. Keep going. - Sam Levenson",
            "The future depends on what you do today. - Mahatma Gandhi",
            "Your limitation—it's only your imagination.",
            "Push yourself, because no one else is going to do it for you.",
            "Great things never come from comfort zones.",
            "Dream it. Wish it. Do it.",
            "Success doesn't just find you. You have to go out and get it.",
            "The harder you work for something, the greater you'll feel when you achieve it.",
            
            # Open Source & Community Building
            "Open source is a development method for software that harnesses the power of distributed peer review and transparency. - Eric S. Raymond",
            "Given enough eyeballs, all bugs are shallow. - Linus's Law",
            "The best way to learn is to teach others.",
            "Share your knowledge. It is a way to achieve immortality. - Dalai Lama",
            "Building community is to the collective as spiritual practice is to the individual. - Starhawk",
            "We make a living by what we get, but we make a life by what we give. - Winston Churchill",
            "The meaning of life is to find your gift. The purpose of life is to give it away. - Pablo Picasso",
            "No one can whistle a symphony. It takes a whole orchestra to play it. - H.E. Luccock",
            "Be the change you wish to see in the world. - Mahatma Gandhi",
            "A society grows great when old men plant trees whose shade they know they shall never sit in. - Greek Proverb",
            
            # Additional Inspirational Quotes
            "The journey of a thousand miles begins with one step. - Lao Tzu",
            "What we think, we become. - Buddha",
            "Life is what happens to you while you're busy making other plans. - John Lennon",
            "The only true wisdom is in knowing you know nothing. - Socrates",
            "It does not matter how slowly you go as long as you do not stop. - Confucius",
            "Everything you've ever wanted is on the other side of fear. - George Addair",
            "Believe you can and you're halfway there. - Theodore Roosevelt",
            "It is during our darkest moments that we must focus to see the light. - Aristotle",
            "Quality is not an act, it is a habit. - Aristotle",
            "The only constant in life is change. - Heraclitus"
        ]
    
    def get_daily_quote(self):
        """Get a consistent quote for today's date using hash-based selection."""
        today = datetime.now().strftime("%Y-%m-%d")
        
        # Create a hash of today's date for consistent daily selection
        hash_object = hashlib.md5(today.encode())
        hash_int = int(hash_object.hexdigest(), 16)
        
        # Use hash to select quote index
        quote_index = hash_int % len(self.quotes)
        return self.quotes[quote_index]
    
    def update_readme(self, readme_path="README.md"):
        """Update the README.md file with today's quote."""
        readme_file = Path(readme_path)
        
        if not readme_file.exists():
            print(f"❌ README.md not found at {readme_path}")
            return False
        
        # Read current content
        content = readme_file.read_text(encoding='utf-8')
        
        # Get today's quote
        daily_quote = self.get_daily_quote()
        
        # Pattern to match the Final Thought section - more flexible for multi-line
        pattern = r'(### ✨ Final Thought.*?<blockquote align="center">.*?<img[^>]*/>.*?<i>)"([^"]*)"(.*?</blockquote>)'
        
        # Create replacement with new quote
        replacement = rf'\1{daily_quote}\3'
        
        # Update content
        new_content = re.sub(pattern, replacement, content, flags=re.MULTILINE | re.DOTALL)
        
        if new_content == content:
            print("⚠️ No Final Thought section found or content unchanged")
            return False
        
        # Write updated content
        readme_file.write_text(new_content, encoding='utf-8')
        
        print(f"✅ README updated with quote: {daily_quote}")
        return True

if __name__ == "__main__":
    updater = DailyQuoteUpdater()
    
    # Show today's quote
    quote = updater.get_daily_quote()
    print(f"📅 Today's quote: {quote}")
    
    # Update README
    success = updater.update_readme()
    
    if success:
        print("🎉 README.md successfully updated!")
    else:
        print("❌ Failed to update README.md")
