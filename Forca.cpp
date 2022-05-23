#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <map>
#include <vector>

using namespace std;
const string PALAVRA_SECRETA = "MELANCIA";
map<char, bool> chutou;
vector<char> chutesErrados;

bool letraExiste(char chute)
{
	 for (char letra : PALAVRA_SECRETA)
	 {
	 	 if (chute == letra)
	 	{
	 	 	return true;
	 	}
	 }
 	return false;
}

bool naoAcertou()
{ 
 	for (char letra : PALAVRA_SECRETA)
 	{
 		if(!chutou[letra])
		 {
		 	return true;
		 }
 	}
 	return false;
}

bool naoEnforcou()
{
 	 return chutesErrados.size() < 5;
	
}



int main ()
{
	 setlocale (LC_ALL, "portuguese");
	 cout << "************************"<<endl;
	 cout << "*     JOGO DA FORCA    *" <<endl;
	 cout << "************************"<<endl;
	 cout <<endl;


	 while(naoAcertou() && naoEnforcou())
	 {	 
	     cout << "Chutes errados: ";
	     for (char letra : chutesErrados)
		 {
	     	cout << letra << " ";
		 }
		 cout << endl;
	     for(char letra : PALAVRA_SECRETA)
		 {
	 	 	if (chutou[letra])
		 	{
	 	 		cout << letra << " "; 
	     	}
	     	else 
	     	{
		     	cout << "_ ";
		 	}
	     } 
	     cout << endl;
	     
	     
		 char chute;
		 cout << "Chute uma letra maiúscula para verificar se ela existe na Palavra Secreta" <<endl;
		 cin >> chute;
		 chutou[chute] = true;
  	      	if (letraExiste(chute))
		 	{
		 		 cout << "Você acertou! Seu chute está na palavra!" <<endl;
		 		 
		 	}
		 	else 
			 {
			 	 cout << "Você errou! Seu chute não está na palavra!" <<endl;
			 	 chutesErrados.push_back(chute);
			 }
 	
	 }
	
}
