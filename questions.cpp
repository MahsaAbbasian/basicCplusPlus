
#include <iostream>
#include <string>
using namespace std;
int main(){

	string name;
	string job;
	string jobType;
	cout << "what is your name?\n";
	getline(std::cin, name);
	cout << "Nice to meet you!" << name << "\n"
	     << "Let me guess that Your name has " << name.length() <<" letter ;) \n"
	     << "Let me see! What do you do?\n" ;
	getline(std::cin, job);
	cout <<"Being a " << job << " seems a good job " << name << " \n";
	
	if ( (job == "developer") || (job == "Developer") )
	{
		/* code */
		cout << "Woooow I notice that we are colleague :)";
	}
	if ( (job == "engineer") || (job == "Engineer") )
	{
		/* code */
		cout << "Which kind of Engineer? \n";
		getline(cin, jobType);
		cout << "Ahaa! " << jobType << " Such a good job you have I used to like to be an "<< jobType << " engineer :) \n";

	}
	if ( (job == "mom ") || (job == "Mother") || (job == "mother") )
	{
		/* code */
		cout <<"Momy " << name << " you are the best Mother in the world :) ";
	}

		if ( (job == "dad ") || (job == "father") || (job == "Father") )
	{
		/* code */
		cout <<"Dady " << name << " you are the best Father in the world :) ";
	}
	cin.ignore();
	return 0;
}