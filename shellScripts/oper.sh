#! /usr/bin/bash
echo choose option
echo 1 to shut down
echo 2 to restart
read op
if [ $op -eq 1 ]
then
    echo "do you want to shedule shut down"
    echo "input 1 for yes any other for no"
    read op1
    if [ $op1 -eq 1 ]
    then
        echo "input time in the format XX:XX"
        read time
        shutdown $time
    else
        shutdown
    fi
elif [ $op -eq 2 ]
then
    reboot
else
echo invalid selectionn
fi
