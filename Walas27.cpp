#include <iostream>

using namespace std;
int x, y;
int main()
{
	cout << "Podaj dwie liczby: " << endl;
		cin >> x;
		cin >> y;
	
	if ((x<=3000) && (y<=3000))
	{ 
			if (x >= y)
			cout << y;
		else
			cout << x << endl;
	}
	else {
		cout << "Nie ta liczba" << endl;
	}
	
	system("pause");
	return 0;
}
