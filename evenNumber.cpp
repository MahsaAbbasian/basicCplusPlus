/* write a program that prints out sum of the even numbers between 0 and n using a loop. 
Please Try to print each even number in the itration.
*/
#include<iostream>
using namespace std;
int main(){
int sum=0;
int n;

cout<<"enter n number please:"<<endl;
cin>>n;
int i=2;
while(i<=n)
{
	/* code */
	sum=sum+i;
	i=i+2;
	cout << "event number is equal to:" <<i <<endl;
}
cout <<"sum of the even number between 0 to"<<n<< "is equal to "<<sum <<endl;
return 0;

}
