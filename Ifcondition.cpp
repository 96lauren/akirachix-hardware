/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int a;
   int b;
   
   cout<<"enter 1st  number";
   cin>> a;
   cout<<" enter 2nd number";
   cin>> b;
   
   if(a>b){ 
      cout<< "a is greater";
       
   }
  else if (a == b){
     cout<< "a is equal to b";
      
  } 
 else{
     cout<<"b is greater";}
    return 0;
}
