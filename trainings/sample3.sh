#!/bin/bash

echo -n "Enter Number:"
read num

if [ $num -gt 0 ]; then
echo "$num is a positive number"

elif [ $num -lt 0 ]; then
echo "$num is a Negative number"

else
echo "$num is Zero"
fi
