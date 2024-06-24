#!/bin/bash

a=1
while [ $a -gt 1 ];
do
echo $a
((a--))
done
echo "outside the loop"
