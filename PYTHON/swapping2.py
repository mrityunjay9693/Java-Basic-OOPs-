num1 = input('num1: ')
num2 = input('num2: ')

#temp = num1

#num1 = num2
#num2 = temp

print('After swapping of two number without using third variable: ')

num2 = num1 + num2

num1 = num2 - num1
num2 = num2 - num1

print(num1,num2)

print('num1:{}'.format(num1))
print('num1:{}'.format(num2))
