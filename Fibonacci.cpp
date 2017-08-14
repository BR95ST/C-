#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int a = 1, b = 1, c, limit;
	cout<<"Limit of the Fibonacci sequence: ";
	cin>>limit;
	for(int i = 0; i < limit; i++)
	{
		cout<<a<<endl;
		c = a;
		a = b;
		b += c;
	}
	return 0;
}