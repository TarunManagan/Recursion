# include <iostream>
#include <string.h>
using namespace std;
void reverse(char *str)
{
   if (*str) //Base Condition
   {
       reverse(str+1); //Recursion
       cout<<("%c", *str);
   }
}
 
int main()
{
   char a[50];
   cout<<"Enter a string: ";
   cin>>a;
   reverse(a); //Function calling
   return 0;
}

/*OUTPUT
Enter a string: Tarun
nuraT
*/
