# cook your dish here
import math as m
t=int(input())   # takes number of sqrt u want
lst=[]
for i in range(t):  
    val=int(input())	# read n number of numbers
    lst.append(val)		# appends them to list
for num in lst:
    sqrt=m.sqrt(num)	# takes sqrt of number 
    print(m.floor(sqrt))	# prints the sqrt numbers