#include <iostream>
#include <string>
using namespace std;

void print(string str);
void print(int i);
void print(string str1, string str2);

int main()
{

	print("Hello World");
	print(3);
	print("Hello", "My love");

	int myInt = 1;
	string myStr = "Cody";
	string mySecondStr = "DeMartin";

	print(myStr, mySecondStr);
	print(myInt);
	
	system("pause");
}

void print(string str)
{
	cout << str << endl;
}

void print(int i)
{
	cout << i << endl;
}

void print(string str1, string str2)
{
	cout << "String 1: " << str1 << endl;
	cout << "String 2: " << str2 << endl;
}