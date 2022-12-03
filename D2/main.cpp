#include <iostream>
#include<fstream>

using namespace std;

int main()
{


    //kamien papier nozyce
    //(A=X=kamien=1pkt , B=Y=papier=2pkt , C=Z=nozyce=3pkt)
                // wygrana= +6pkt , remis= +3pkt , przegrana= +0pkt
                //przyklad przeciwnik wybiera kamien, ja wybieram papier, otrzymuje 2pkt za wybranie papieru i 6 pkt za wygrana razem 8pkt za runde
                //przyklad przeciwnik wybiera nozyce, ja wybieram nozyce, otrzymuje 3pkt za wybranie nozyc i 3 pkt za remis razem 6pkt za runde

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
               suma=suma+4;

           }
           else if(wiersz=="A Y")
            {
               suma=suma+8;

           }
           else if(wiersz=="A Z")
            {
               suma=suma+3;

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
               suma=suma+7;

           }
           else if(wiersz=="C Y")
            {
               suma=suma+2;

           }
           else if(wiersz=="C Z")
            {
               suma=suma+6;

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
