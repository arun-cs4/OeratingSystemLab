#! /usr/bin/bash
echo enter the word
read word
touch file.txt
chmod +w file.txt
echo "$word" > file.txt
words=$(wc -w file.txt)
chars=$(wc -m file.txt)
echo "number of words is : $words"
echo "number of characters is : $chars"
