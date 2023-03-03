



#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	void* ptr = &a;
  cout << *ptr << endl;// compiler error
	cout << *(int *)ptr << endl;//the right way to print

	return 0;
}

