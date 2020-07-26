import re

text = input("Text: ")

total_letters =0
for char in text:
    if char.isalpha():
        total_letters += 1


total_words = 1     ##using regex: re.findall(r"(?i)\b[a-z]+\b", text)
for char in text:
    if char == " ":
        total_words += 1

total_sent = 0
if "?" in text:
    total_sent += text.count("?")
if "." in text:
    total_sent += text.count(".")
if "!" in text:
    total_sent += text.count("!")

#print (total_letters, total_words, total_sent)

def colemanliau():
    l = (total_letters / total_words) *100
    s = (total_sent / total_words) *100

    index = 0.0588 * l - 0.296 * s - 15.8
    if index >=16:
        print("Grade 16+")
    elif index < 1:
        print( "Before Grade 1")
    else:

        print( "Grade" , round(index))

colemanliau()
