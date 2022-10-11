#! /usr/bin/bash
echo enter first operand
read op1
echo "select symbol"
echo "1 for addition"
echo "2 for subtraction"
echo "3 for multiplication"
echo "4 for division"
read operator
echo enter second operand
read op2
if [ $operator -eq 1 ]
then
    sum=`expr $op1 + $op2`
    echo "sum = $sum"
elif [ $operator -eq 2 ]
then
    difference=`expr $op1 - $op2`
    echo "difference = $difference"
elif [ $operator -eq 3 ]
then
    product=`expr $op1 * $op2`
    echo "product = $product"
elif [ $operator -eq 4 ]
then
    division=`expr $op1 / $op2`
    echo "division = $division"
else
echo invalid selection
fi
