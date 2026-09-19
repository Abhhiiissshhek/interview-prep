# variables in python

name = "Alexender"
age = 20
marks = 96

print(name)
print(age)
print(marks)


# python automatically knows the datatype

x = 10          # int
price = 99.5    # float
grade = 'A'     # str
passed = True   # bool

print(type(x))
print(type(price))
print(type(grade))
print(type(passed))


# we can change the value of a variable

age = 20
print(age)

age = 21
print(age)


# multiple variables

a = 10
b = 20

print(a + b)


# we can assign multiple values at once

x, y, z = 10, 20, 30

print(x)
print(y)
print(z)


# same value to multiple variables

a = b = c = 100

print(a)
print(b)
print(c)


# basic operations

x = 10
y = 3

print(x + y)
print(x - y)
print(x * y)
print(x / y)

# / gives decimal result
print(10 / 3)

# // gives floor division
print(10 // 3)

# power
print(2 ** 3)


# type conversion

x = "10"

# x is a string here
print(type(x))

# converting string to int
x = int(x)

print(x)
print(type(x))


# converting int to float

x = 10
x = float(x)

print(x)
print(type(x))


# f-string

name = "Alex"
age = 20

print(f"My name is {name} and I am {age} years old.")


# important:
# Python does not require us to specify the datatype
# like we do in C++.
#
# C++:
# int age = 20;
#
# Python:
# age = 20
