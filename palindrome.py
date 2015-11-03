# A program that checks if the word entered is a palindrome

word = input("Enter a word:")

if word[len(word)-1::-1] == word:
    print("%s is a palindrome" %word)
else:
    print("%s is not a palindrome" %word)