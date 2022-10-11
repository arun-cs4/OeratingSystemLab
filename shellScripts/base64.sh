#! /usr/bin/bash
echo choose option
echo "1 for base64 encode"
echo "2 for base64 decode"
read op
if [ $op -eq 1 ]
then
    echo enter text
    read text
    echo base64 code of the text is
    echo  $text | base64
elif [ $op -eq 2 ]
then
    echo enter base64 text
    read text
    echo decoded text is
    echo  $text | base64 -d
else
    echo invalid selection
fi
