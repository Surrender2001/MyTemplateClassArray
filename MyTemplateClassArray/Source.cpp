#include<iostream>
#include<string>
#include"Array.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "ru");

	Array<int> arr(10);
	//try
	//{
	//	arr.Power3();
	//}
	//catch (const exception& ex)
	//{
	//	cout << ex.what() << endl;
	//} 

	arr.Fill();
	arr.Show();
	arr.Power3();
	arr.Show();

	//try
	//{
	//	arr.push_back(53);
	//}
	//catch (exception& ex)
	//{
	//	cout << ex.what() << endl;
	//}

	arr.Erase();

	//try
	//{
	//	arr.delete_the_first();
	//}
	//catch (exception& ex)
	//{
	//	cout << ex.what() << endl;
	//}


	return 0;
	
}