NUM1=20
NUM2=30
RES=$(( $NUM1 + $NUM2 ))
echo "sum of two numbers are: $RES"
RES1=`expr $NUM1 + $NUM2`
echo "sum of two numbers are: $RES"
