#include <iostream>
#include <locale.h>

using namespace std;
int main ()
{
	setlocale (LC_ALL, "portuguese");
	
	string palavraSecreta = "MELANCIA";
	
	cout << palavraSecreta <<endl;
	
	
}
