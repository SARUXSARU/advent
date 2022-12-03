#include <iostream>
#include<fstream>
#include <string>

using namespace std;

int main()
{
    int j=0;
    int suma=0;
    ifstream dane;
    dane.open("dane.txt");
    if(dane.is_open())
	{
		string wiersz;
		while(getline(dane,wiersz))
		{
            if(wiersz=="")
            {
                j++; // pobieranie rozmiaru tablicy wynikowej
            }
		}
	}
	else
    {
		cout<<"Nie uda³o siê otworzyæ pliku";
    }
    dane.close();
    int roz=j;
    int tab[roz];
    j=0;

    dane.open("dane.txt");
    if(dane.is_open())
	{
		string wiersz;
		while(getline(dane,wiersz))
		{
            if(wiersz=="")
            {
                tab[j]=suma;
                cout<<tab[j]<<endl; //przypisanie wynikow do tablicy
                j++;
                suma=0;
            }
            else
            {
                int xy=stoi(wiersz);
                suma=suma+xy; //sumowanie wynikow odzielonych spacjami
            }
		}
	}
	else
    {
		cout<<"Nie uda³o siê otworzyæ pliku";
    }
    int Max=0;
    for(int i=0;i<roz;i++)
    {
        if(tab[i]>Max)
        {
            Max=tab[i]; //znalezienie wartosci najwiekszej z tablicy
        }
    }

    cout<<"MAX: "<<Max; //wyswietlenie wartosci max
    dane.close();



    return 0;
}
