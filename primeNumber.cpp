	#include<iostream>
using namespace std;
int main() { 

	int count = 0;
	int i;
	int number;
	cout<<"Please Enter a Positive number to check if it is prime or not"<<endl;
	cin>>number;

		for (int i = 2; i <= number ; ++i)
		{ 
			if(number%i==0){
				count++; 

			}
		}if (count > 1)
		{

			cout<< "This number is not a prime number"<<endl;

		}else{
			
		
			cout<< "This number is a prime number"<<endl;
		}


		return 0;
}