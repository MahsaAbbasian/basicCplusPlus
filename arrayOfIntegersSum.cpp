#include<iostream>
using namespace std;
int getAbsSum(vector<int> arr) {
	int x=0;
  for (int y:arr)
  {
    x+= abs(y);
  }
  return x;
}