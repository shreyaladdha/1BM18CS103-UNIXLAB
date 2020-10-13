echo "Enter Value of N"
read N

i=0
sum=0

while [ $i -le $N ]
do 
  sum=$((sum + i)) 
  i=$((i + 2))
done

echo "Sum of even numbers upto "$N " : "$sum
