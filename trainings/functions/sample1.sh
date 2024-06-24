#!/bin/bash

welcome(){
          echo "Welcome $1"
          return 40
}

welcome Alex
res=$?
echo "Number is:$res"
