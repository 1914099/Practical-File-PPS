# PPS
## My Details
**Name** - Sarabjeet Kaur
**CRN** -1914099
**Branch** - C.E
**Section**-B2



**LOGO**
https://images.app.goo.gl/nFUBsDG3zxyqmkCUA











## 1. Program to add two integers.


/* To add two integers */

#include <stdio.h>
int main() {
    
int a,b;

printf("\nEnter the numbers");

printf("\nA:");
scanf("%d",&a);

printf("\nB:");
scanf("%d",&b);

a=a+b;

printf("\n Sum of the number is %d ",a);

return 0;

}
## Output of the program
Enter the numbers
A:4

B:5

 Sum of the number is 9 
# 2. Program to Multiply two Floating Ponit Numbers.

#include<stdio.h>

int main()

{

float x,y,z;

printf("\nEnter The First Numder: ");

scanf("%f", &x);

printf("\nEnter The Second Numder: ");

scanf("%f", &y);

z = x*y;

printf("\nAnswer is: = %.3f", z);

return 0;
}

## Output of the program

Enter The First Numder: 5

Enter The Second Numder: 7

Answer is: = 35.000

## 3. Program to check odd even number.


#include<stdio.h>
int main() { 

  int num,temp;

  printf("Enter the Number:");
  scanf("%d",&num);

  if(num%2==0)
  printf("\nNumber is Even");

  else
  printf("\nNumber is Odd");

  printf("\n\n");
  return 0;
}

## Output of the program

Enter the Number:7

Number is Odd

## 4. Program to calculate sum of first 10 natural numbers using for loop.

#include <stdio.h>
void main()
{
    int  j, sum = 0;

    printf("The first 10 natural number is :\n");
 
    for (j = 1; j <= 10; j++)
    {
        sum = sum + j;
        printf("%d ",j);    
    }
    printf("\nThe Sum is : %d\n", sum);
}
## Output of the program

The first 10 natural number is :                                                                              
1 2 3 4 5 6 7 8 9 10                                                                                          
The Sum is : 55
##  5. Program to print EVEN numbers from 1 to N usinf while loop
#include <stdio.h>

int main()
{
    int i, n;
  
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are: \n", n);

  
    i=1;
    while(i<=n)
    {
       
        if(i%2==0)
        {
            printf("%d\n", i);
        }

        i++;
    }

    return 0;

}
## Output of the program
Print all even numbers till: 7
All even numbers from 1 to 7 are: 
2
4
6

##  6. Program to print ODD numbers from 1 to N usinf while loop
#include <stdio.h>

int main()
{
        
        int number;
       
        int n;

        
        number=1;

        
        printf("Enter the value of N: ");
        scanf("%d",&n);


        printf("Odd Numbers from 1 to %d:\n",n);

       
        while(number<=n)
        {
                
                if(number%2 != 0)
                        printf("%d ",number);
                number++;
        }

        return 0;
}
## Output of the program
Enter the value of N: 5
Odd Numbers from 1 to 5:
1 
3 
5 
##  7. Program to make simple calculator using switch.


# include <stdio.h>

int main()
{

    char operator;
    
    float firstNumber,secondNumber;
    
    printf("Enter an operator (+, -, *,/) : ");
    
    scanf("%c", &operator);
    
    printf("Enter two operands: ");
    
    scanf("%f %f",&firstNumber, &secondNumber);
    
    switch(operator)
    
    {
        case '+':
        
            printf("%f + %f = %f",firstNumber, secondNumber, firstNumber + secondNumber);
            
            break;
            
        case '-':
        
            printf("%f - %f = %f",firstNumber, secondNumber, firstNumber - secondNumber);
            
            break;
            
        case '*':
        
            printf("%f * %f = %f",firstNumber, secondNumber, firstNumber * secondNumber);
            
            break;
            
        case '/':
        
            printf("%f / %f = %f",firstNumber, secondNumber, firstNumber / secondNumber);
            
            break;
            
        default:
        
            printf("Error! operator is not correct");
            
    }
    
    return 0;
    
}

## Output of the program
Enter an operator (+, -, *,/) : +
Enter two operands: 50 6
50.000000 + 6.000000 = 56.000000

##  8. Program to find maximum between 2 numbers using function
#include <stdio.h>


int max(int num1, int num2);



int main() 
{
    int num1, num2, maximum;
    
   
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    maximum = max(num1, num2); 
    
    
    printf("\nMaximum = %d\n", maximum);
    
    return 0;
}



int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

## Output of the program
Enter any two numbers: 5 7

Maximum = 7


##  9. Program to find prime number using function.
#include<stdio.h>
 
int check_prime(int);
 
main()
{
   int n, result;
 
   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&n);
 
   result = check_prime(n);
 
   if ( result == 1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);
 
   return 0;
}
 
int check_prime(int n)
{
   int c;
 
   for ( c = 2 ; c <= n- 1 ; c++ )
   { 
      if ( n%c == 0 )
     return 0;
   }
   return 1;
}

## Output of the program
Enter an integer to check whether it is prime or not.
7
7 is prime.

##  10. Program for function using call by value.

#include <stdio.h>

swap (int, int);

main()

{

int a, b;

printf("\nEnter value of a & b: ");

scanf("%d %d", &a, &b);

printf("\nBefore Swapping:\n");

printf("\na = %d\n\nb = %d\n", a, b);

swap(a, b);

printf("\nAfter Swapping:\n");

printf("\na = %d\n\nb = %d", a, b);

getch();

}
swap (int a, int b)

{
int temp;

temp = a;

a = b;

b = temp;

}


## Output of the program

Enter value of a & b: 10 20

Before Swapping:

a = 10

b = 20

After Swapping:

a = 10

b = 20
##  11. Program for function using call by reference.
#include <stdio.h>
void increment(int  *var)
{
    
    *var = *var+1;
}
int main()
{
     int num=20;
     
     increment(&num);
     printf("Value of num is: %d", num);
   return 0;
}
## Output of the program
Value of num is: 21

##  12. Program to take 5 values from user and store them in an array. Print the elements stored in the array.

#include <stdio.h>

int main() 

{

  int values[5];
  
  printf("Enter 5 integers: ");
  
  // taking input and storing it in an array
  
  for(int i = 0; i < 5; ++i)
  {
     scanf("%d", &values[i]);
  }
  
  printf("Displaying integers: ");
  
  // printing elements of an array
  
  for(int i = 0; i < 5; ++i) {
  
     printf("%d\n", values[i]);
     
  }
  
  return 0;
  
}


## Output of the program

Enter 5 integers: 1

-3

34

0

3

Displaying integers: 1

-3

34

0

3


##  13. Program to find average of n numbers using arrays.

 #include <stdio.h>
 
    int main()
    
    {
        int n, i;
        
        float num[100], sum = 0.0, average;
        
        printf("Enter the numbers of elements: ");
        
        scanf("%d", &n);
        
        while (n > 100 || n <= 0)
        
        {
            printf("Error! number should in range of (1 to 100).\n");
            
            printf("Enter the number again: ");
            
            scanf("%d", &n);
            
        }
        for(i = 0; i < n; ++i)
        
        {
            printf("%d. Enter number: ", i+1);
            
            scanf("%f", &num[i]);
            
            sum += num[i];
            
        }
        average = sum / n;
        
        printf("Average = %.2f", average);
        
        return 0;
        
    }
## Output of the program

Enter the numbers of elements: 6

1. Enter number: 45.3

2. Enter number: 67.5

3. Enter number: -45.6

4. Enter number: 20.34

5. Enter number: 33

6. Enter number: 45.6

Average = 27.69


##  14.Program to accept sorted array and do search using binary search. 

 #include <stdio.h>
 
  void main()
  {
 
int array[10];

int i, j, num, temp, keynum;

 int low, mid, high; 
 
        printf("Enter the value of num \n");
        

        scanf("%d", &num);
        
         printf("Enter the elements one by one \n");
         
         for (i = 0; i < num; i++)
         

        {

            scanf("%d", &array[i]);

        }

        printf("Input array elements \n");
        

        for (i = 0; i < num; i++)

        {

            printf("%d\n", array[i]);

        }
        
   printf("Enter the element to be searched \n");

        scanf("%d", &keynum);



        low = 1;

        high = num;

        do

        {

            mid = (low + high) / 2;

            if (keynum < array[mid])

                high = mid - 1;

            else if (keynum > array[mid])

                low = mid + 1;

        } while (keynum != array[mid] && low <= high);

        if (keynum == array[mid])
{
 printf("SEARCH SUCCESSFUL \n");

        }

        else

        {
 printf("SEARCH FAILED \n");
   }
 }
 
## Output of the program

Enter the value of num 

2

Enter the elements one by one 

1 5

Input array elements 

1
5

Sorted array is...

1
5

Enter the element to be searched 

5
SEARCH SUCCESSFUL


##  15.Program to Implement Linear search.

#include<stdio.h>
int main()
{
        int array[100],search,i,n;
        printf("Enter the number of elements in array:");
        scanf("%d",&n);
        for (i=0;i<n;i++)
{
        printf("Enter[%d] element:",i);
        scanf("%d",&array[i]);
}
{
        printf("Enter a number to search:");
        scanf("%d",&search);
}
        for(i=0;i<=n;i++)
{
        if(array[i]==search)
{ 
        printf(" %d is present at location %d.\n",search,i+1);
        break;
}
        else if(i>=n)

        printf("%d isn't present in the array.\n",search);
}
        return 0;
}

## Output of the program

Enter the number of elements in array:4

Enter[0] element:2
Enter[1] element:6
Enter[2] element:8
Enter[3] element:5

Enter a number to search:6

 6 is present at location 2.
 
##  16.Program to Sort N Numbers in Asending Order using Bubble Sort

#include <stdio.h>

#define MAXSIZE 10

 

void main()

{

    int array[MAXSIZE];

    int i, j, num, temp;

 

    printf("Enter the value of num \n");

    scanf("%d", &num);

    printf("Enter the elements one by one \n");

    for (i = 0; i < num; i++)

    {

        scanf("%d", &array[i]);

    }

    printf("Input array is \n");

    for (i = 0; i < num; i++)

    {

        printf("%d\n", array[i]);
 }

    }
 for (i = 0; i < num; i++)

    {

        for (j = 0; j < (num - i - 1); j++)

        {

            if (array[j] > array[j + 1])

            {

                temp = array[j];

                array[j] = array[j + 1];

                array[j + 1] = temp;

            }

        }

    }

    printf("Sorted array is...\n");

    for (i = 0; i < num; i++)

    {

        printf("%d\n", array[i]);

    }

}

## Output of the program

Enter the value of num

6

Enter the elements one by one

23

45

67

89

12

34

Input array is

23

45

67

89

12

34

Sorted array is...

12

23

34

45

67

89

##  17.Program to declare,assignand access a pointer variable.

#include <stdio.h>

int main()
{
    int num;    /*declaration of integer variable*/
    int *pNum;  /*declaration of integer pointer*/
 
    pNum=& num; 
    
    num=100;   

    printf("Using variable num:\n");
    
    printf("value of num: %d\naddress of num: %u\n",num,&num);
    
    printf("Using pointer variable:\n");
    
    printf("value of num: %d\naddress of num: %u\n",*pNum,pNum);
 
   return 0;
}

## Output of the program

Using variable num:

    value of num: 100
    
    address of num: 2764564284
    
    Using pointer variable:
    
    value of num: 100
    
    address of num: 2764564284
    

##  18.Program to store information of a student using structure.

#include <stdio.h>

struct student
{
    char name[50];
    
    int roll;
    
    float marks;
    
} 
s[10];

int main()

{
    int i;
    
    printf("Enter information of students:\n");
    
    // storing information
    
    for(i=0; i<10; ++i)
    
    {
        s[i].roll = i+1;
        
        printf("\nFor roll number%d,\n",s[i].roll);
        
        printf("Enter name: ");
        
        scanf("%s",s[i].name);
        
        printf("Enter marks: ");
        
        scanf("%f",&s[i].marks);
        
        printf("\n");
    }
    

 printf("Displaying Information:\n\n");
 
    // displaying information
    
    for(i=0; i<10; ++i)
    
    {
    
    
        printf("\nRoll number: %d\n",i+1);
        
        printf("Name: ");
        
        puts(s[i].name);
        
        printf("Marks: %.1f",s[i].marks);
        
        printf("\n");
        
    }
    
    return 0;
    
}


 ## Output of the program
 
Enter information of students: 

For roll number1,

Enter name: Tom

Enter marks: 98


For roll number2,

Enter name: Jerry

Enter marks: 89
.
.
.
Displaying Information:


Roll number: 1

Name: Tom

Marks: 98
.
.
.

##  19.Program to find factorial of a number using recursion.

  #include <stdio.h>
  
  
    long int multiplyNumbers(int n);
    
    int main()
    
   
    {
    
        int n;
        
        printf("Enter a positive integer: ");
        
        scanf("%d", &n);
        
        printf("Factorial of %d = %ld", n, multiplyNumbers(n));
        
        return 0;
        
    }
   
    long int multiplyNumbers(int n)
    
    {
    
        if (n >= 1)
        
            return n*multiplyNumbers(n-1);
            
        else
        
            return 1;
            
    }
    

## Output of the program

Enter a positive integer: 6

Factorial of 6 = 720



##  20.Program to display fibonacci series using recursion.

#include <stdio.h>


int main()

{

  int n, first = 0, second = 1, next, c;
  

  printf("Enter the number of terms\n");
  
  scanf("%d", &n);
  
  printf("First %d terms of Fibonacci series are:\n", n);

  for (c = 0; c < n; c++)
  {
  
    if (c <= 1)
    
      next = c;
      
    else
    
    {
    
      next = first + second;
      
      first = second;
      
      second = next;
      
    }
    printf("%d\n", next);
    
  }
  

  return 0;
  
}


## Output of the program

Enter the number of terms

5
First 5 terms of Fibonacci series are:

0

1

1

2

3
