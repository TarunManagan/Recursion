# Name: S.Tarun Managan
# PRN: 22070123118

# Recursion
The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function. 
Using a recursive algorithm, certain problems can be solved quite easily.

* Properties of Recursion:

--> Performing the same operations multiple times with different inputs.
--> In every step, we try smaller inputs to make the problem smaller.
--> A base condition is needed to stop the recursion otherwise infinite loop will occur.

# EXPERIMENT NO: 1
AIM: Factorial using recursion
Algorithm: 
--> STEP 1: START
--> STEP 2: Initialize a variable and take its input from the user
--> STEP 3: Pass this value as an argument of the recursive function
--> STEP 4: 
int fact(int n){
    if(n<=1){ //Terminating statement (Base Condition)
        return 1;
    }else{
        return (n*fact(n-1)); //Recursion
    }
}
--> STEP 5: Call the function and print the output
--> STEP 6: STOP

OUTPUT
Enter a number: 4
24

# EXPERIMENT NO: 2
AIM: Add the elements using recursion
Algorithm: 

--> STEP 1: START
--> STEP 2: Initialize a variable and take its input from the user
--> STEP 3: Pass this value as an argument of the recursive function
--> STEP 4: 
int add(int n){
    if(n<=1){ //Terminating statement (Base Condition)
        return 1;
    }else{
        return (n+add(n-1)); //Recursion
    }
}
--> STEP 5: Call the function and print the output
--> STEP 6: STOP

OUTPUT
Enter a number: 5
15

# EXPERIMENT NO: 3
AIM: Reverse a string using recursion
Algorithm: 

--> STEP 1: START
--> STEP 2: Initialize an array and take its input from the user
--> STEP 3: Pass this value as an argument of the recursive function
--> STEP 4: 
int add(int n){
   void reverse(char *str)
{
   if (*str) //Base Condition
   {
       reverse(str+1); //Recursion
       cout<<("%c", *str);
   }
}
--> STEP 5: Call the function and print the output
--> STEP 6: STOP

OUTPUT
Enter a string: Tarun
nuraT

# EXPERIMENT NO: 4
AIM: Reverse a number using recursion
Algorithm: 

--> STEP 1: START
--> STEP 2: Initialize a variable and take its input from the user
--> STEP 3: Pass this value as an argument of the recursive function
--> STEP 4: 
void print_rev(int i)
    {
        if(i>0) //Base Condition
        {
            cout<<(i%10);
            print_rev(i/10); //Recursion
        }
    }

--> STEP 5: Call the function and print the output
--> STEP 6: STOP

OUTPUT
Enter the number: 67
76




