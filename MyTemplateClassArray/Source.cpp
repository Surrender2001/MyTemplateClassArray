#include<iostream>
#include"Array.h"
using namespace std;



int main()
{


	Array<int> arr(10);
	arr.Fill();
	arr.Show();
	arr.push_back(5);
	arr.Show();
	arr.deleteMin();
	arr.Show();
	return 0;
	
}