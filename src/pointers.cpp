#include <iostream>

using namespace std;
               //&a         &b
void myswap(int* ptr1, int* ptr2)
{      //a
  auto temp = *ptr1;
  //a  =  b
  *ptr1 = *ptr2;
  //b  = temp
  *ptr2 = temp;
}


int main()
{
  int a = 25, b = 11;    
	
  cout<<"What am I doing wrong ☹ \n\n";

  cout<<"a = "<<a<<", b = "<<b<<endl;

//swap(a,b); //why does theirs work????   
 
  myswap(&a, &b); // but mine doesn't ?!?!?!?!!!???

  cout<<"a = "<<a<<", b = "<<b<<endl;


}
