#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;

int main(){

	int randomNumber1, randomNumber2, maxRand, sumOfRandNumbers, userInput;
	cout<<"Please enter Maximum range of random numbers you wish to have"<<endl;
	cin>>maxRand;
	
	/* srand(time(null)); makes use of the computer's internal clock(since time is changing continually so seeds keep changing forever)
	to control the choice of seed.

	in order to simulate a random number we need two bult in c++ functions, rand() and srand().
	srand() is used to provide seed for generating random numbers
	rand() is used to generate next random number in sequence.
	*/
	srand(time(0));
	randomNumber1 = (rand()%maxRand)+1;
	randomNumber2 = (rand()%maxRand)+1;

	sumOfRandNumbers = randomNumber1 + randomNumber2 ;

	cout<<"Random number1 is equal to "<<randomNumber1<<endl;
	cout<<"Random number2 is equal to "<<randomNumber2<<endl;

	cout<<randomNumber1<< "+" <<randomNumber2<< "= ? " <<endl;

	cout<<"Please guest a number and enter below "<<endl;
	cin>>userInput;

	if (userInput==sumOfRandNumbers)
	{
		cout<<"congradulate your answer is correct"<<endl;
	}else{
		cout<<"your is wrong and correct answer is = "<<sumOfRandNumbers<<endl;
	}

	return 0;

}