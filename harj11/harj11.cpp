/******************************************
* Teht„v„: harjoitus 11
* Tekij„ Joni Laine
* PVM: 24.9.2013
* Kuvaus:
*		Kydyy k„ytt„j„lt„ 2 lukua
*		ja tekee halutun laskutoimituksen
*		tai antaa vaihtaa lukuja
*
*******************************************/

#include <iostream>
using namespace std;

int main()
{
int luku1, luku2, toiminto, poistu=1;

cout<<"Anna luku: ";
cin>> luku1;
cout<<"Anna luku ";
cin>> luku2;

while(poistu==1)
{
cout <<"VALIKKO"<<endl;
cout <<"0. Lopetus"<<endl;
cout <<"1. Summa"<<endl;
cout <<"2. Erotus"<<endl;
cout <<"3. Tulo"<<endl;
cout <<"4. Osamaara"<<endl;
cout <<"5. Jakojaannos"<<endl;
cout <<"6. Anna uudet luvut"<<endl;
cin >> toiminto;

	if(toiminto==1)
	{
		cout <<"Summa on: "<<luku1+luku2<<endl;
		continue;
	}
	if(toiminto==2)
	{
		cout <<"Erotus on: "<<luku1-luku2<<endl;
		continue;
	}
	if(toiminto==3)
	{
		cout <<"Tulo on: "<<luku1*luku2<<endl;
		continue;
	}
	if(toiminto==4)
	{
		cout <<"Osamaara on: "<<luku1/luku2<<endl;
		continue;
	}
	if(toiminto==5)
	{
		cout <<"Jakojaannos on: "<<luku1%luku2<<endl;
		continue;
	}
	if(toiminto==6)
	{
		cout <<"Anna luku: "<<endl;
		cin>>luku1;
		cout <<"Anna luku: "<<endl;
		cin>>luku2;
		continue;
	}
	if(toiminto==0)
	{
		cout<<"Get Lost"<<endl;
		break;
	}

}
}