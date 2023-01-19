/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void isprimen (int n)
{
     int d= 2;
  for (int j = 2; j < n; j++)
    {
       
      bool flag = true;
      for (int i = 2; i < j; i++)
	{
	  if (j % i == 0)
	    {
	      flag = false;
	      break;
	    }
	}
      if (flag == true && d%2==0)
	{
	  cout << j<<", ";
	}
	if(flag){
	    d++;
	}
    }
}

int
main ()
{
  int n;
  cin >> n;
  isprimen (n);
  return 0;
}
