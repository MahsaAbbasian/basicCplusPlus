/******************************************************************************

Write a program that takes n(n is a positive number) and will print the patern below.

1
1 2
1 2 3
1 2 3 4
1 ......n

example 1:
If n=3 
This output will be printed 
1
1 2 
1 2 3 

***************************
example 2:
If n=6 
This output will be printed 
 1
 1 2
 1 2 3                                                                                                                                                                               
 1 2 3 4                                                                                                                                                                             
 1 2 3 4 5                                                                                                                                                                           
 1 2 3 4 5 6
************************************************************************************************************************************/
#include <iostream>
using namespace std;
int printPatern(int n){
   
    for(int i=0; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            
            cout <<" "<<j ;
           
        }
        //moving to next line
        cout << endl;
       
    }

}
int main()
{
    int n;
    cin >> n;
    printPatern(n);

    return 0;
}


