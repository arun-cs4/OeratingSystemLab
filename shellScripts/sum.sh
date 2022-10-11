#! /usr/bin/bash
echo "enter the value of n"
read n
sumodd=0
sumeven=0
i=0
while [ $i -lt $n ]
do
echo "enter number"
read num
if [ `expr $num % 2` -ne 0 ]
then
sumodd=`expr $sumodd + $num`
else
sumeven=`expr $sumeven + $num`
fi
i=`expr $i + 1`
done
echo "Sum of odd nummbers=$sumodd"
echo "Sum of even nummbers=$sumeven"
