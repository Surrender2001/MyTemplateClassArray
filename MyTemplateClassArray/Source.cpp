#include<iostream>
#include"Array.h"
using namespace std;



int main()
{


	Array<int> arr(14);
	arr.Fill();
	arr.Show();

	auto it = Array<int>::Iterator(arr.begin());

	while (it != arr.end())
	{
		cout << *it << endl;
		it++;
		it++;
	
	}
	it = arr.begin();
	cout << "===============" << endl;
	while (it != arr.end())
	{
		cout << *it << endl;
		it++;
		it++;
	}

	return 0;
	
}