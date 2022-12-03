#include <iostream>
#include<fstream>

using namespace std;

int main()
{


    //kamien papier nozyce
    //(A=kamien=1pkt , B=papier=2pkt , C=nozyce=3pkt)
                // Z=wygrana= +6pkt , Y=remis= +3pkt , X=przegrana= +0pkt
                //przyklad przeciwnik wybiera kamien=A, wynik to przegrana=X  (czyli zostaly wybrane nozyce), otrzymuje 3pkt za wybranie nozyc i 0 pkt za przegrana razem 3pkt za runde
                //przyklad przeciwnik wybiera nozyce, wynik to wygrana=Z (czyli zostal wybrany kamien), otrzymuje 1pkt za wybranie kamienia i 6 pkt za wygrana razem 7pkt za runde

    int suma=0; //suma punktow za wszytskie rundy

  ifstream dane;
  dane.open("dane.txt"); //plik z danymi o przebiegu kolejnych rund
    if(dane.is_open())
	{
		string wiersz;
		while(getline(dane,wiersz))
		{
           if(wiersz=="A X")
           {
               suma=suma+3;

           }
           else if(wiersz=="A Y")
            {
               suma=suma+4;

           }
           else if(wiersz=="A Z")
            {
               suma=suma+8;

           }
           else if(wiersz=="B X")
            {
               suma=suma+1;

           }
           else if(wiersz=="B Y")
            {
               suma=suma+5;

           }
           else if(wiersz=="B Z")
            {
               suma=suma+9;

           }
           else if(wiersz=="C X")
            {
               suma=suma+2;

           }
           else if(wiersz=="C Y")
            {
               suma=suma+6;

           }
           else if(wiersz=="C Z")
            {
               suma=suma+7;

           }


		}
	}
	else
    {
		cout<<"Nie udalo sie otworzyc pliku";
    }
    dane.close();

    cout<<"suma: "<<suma<<endl; //wypisanie uzyskanego wyniku

    return 0;
}
