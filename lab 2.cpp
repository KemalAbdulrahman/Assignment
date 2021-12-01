//
//  main.cpp
//  Lab Assignment 2
//
//  Created by Kemal Abdulrahman on 2/28/20.
//  Copyright © 2020 Kemal Abdulrahman. All rights reserved.
//

#include <iostream>

using namespace std;
int factorial(int size){
   int fact=1;
   for (int n=1;n<=size;n++){
      fact=fact*n;
   }
   return fact;
}

int fact_rec(int n)
{
   if(n==0)
      return 1;
   else
      return n*fact_rec(n-1);

}

int main()
{
   cout << "loop"<<endl;
   cout << factorial(8) << endl;
   cout << "rec"<<endl;
   cout<< fact_rec(8)<<endl;


   return 0;
}
