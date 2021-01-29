// simpleCalculator.cpp
#include <iostream>
using namespace std;

int main()
{
    double inputNum1 = 0.0;
    double inputNum2 = 0.0;
    double resultValue = 0.0;
    char mathOpration = ' ';
    int numberOfTrys;

    cout << "how many calculation you need to do? \n";
    cin >> numberOfTrys;

    for (int i = 0; i < numberOfTrys; i++) {
        cout << "Your " << i+1 << " calculation\n";
        cout << "Please enter First number\n";
        cin >> inputNum1;
        cout << "Please enter Second number\n";
        cin >> inputNum2;

        cout << "Please enter one of the addition, subtraction, multiplication, division opration \n";
        cin >> mathOpration;

        if (mathOpration == '+')
        {
            resultValue = inputNum1 + inputNum2;
            //cout << "Result of value for " << resultValue << endl;
        }
        else if (mathOpration == '-')
        {
            resultValue = inputNum1 - inputNum2;
            //cout << "Result of value for " << inputNum1 << "-" << inputNum2 << " = " << resultValue << endl;
        }
        else if (mathOpration == '*')
        {
            resultValue = inputNum1 * inputNum2;
            //cout << "Result of value for " << inputNum1 << "*" << inputNum2 << " = " << resultValue << endl;
        }
        else if (mathOpration == '/')
        {
            resultValue = inputNum1 / inputNum2;
            //cout << "Result of value for " << inputNum1 << "/" << inputNum2 << " = " << resultValue << endl;
        }
        else
        {
            //cout << "Sorry this matematical opreation is not valid in simple calculator " << endl;
        }

        cout << resultValue << endl;
    }

    system("pause>0");
}