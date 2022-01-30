num = 8525879
print("Input number:",num)
reverse_num = 0

while num !=0:
    d = num % 10
    reverse_num = reverse_num*10 + d
    num //=10


print("Reversed number : "+str(reverse_num))

