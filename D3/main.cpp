#include <iostream>
#include<fstream>
#include <cstring>
#include<string>

using namespace std;

int main()
{
       // char c[52]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int suma=0;
    ifstream dane;
    dane.open("dane.txt");
    if(dane.is_open())
    {
        string wiersz;
        while(getline(dane,wiersz))
        {
            int c=0;
            int l=wiersz.length();
            for(int i=0;i<l/2;i++)
            {
                for(int j=l/2;j<l;j++)
                {
                    if(wiersz[i]==wiersz[j])
                    {

        if(wiersz[i]=='a')
        {
            suma=suma+1;
        }
        else if(wiersz[i]=='b')
        {
            suma=suma+2;
        }
        else if(wiersz[i]=='c')
        {
            suma=suma+3;
        }
        else if(wiersz[i]=='d')
        {
            suma=suma+4;
        }
        else if(wiersz[i]=='e')
        {
            suma=suma+5;
        }
        else if(wiersz[i]=='f')
        {
            suma=suma+6;
        }
        else if(wiersz[i]=='g')
        {
            suma=suma+7;
        }
        else if(wiersz[i]=='h')
        {
            suma=suma+8;
        }
        else if(wiersz[i]=='i')
        {
            suma=suma+9;
        }
        else if(wiersz[i]=='j')
        {
            suma=suma+10;
        }
        else if(wiersz[i]=='k')
        {
            suma=suma+11;
        }
        else if(wiersz[i]=='l')
        {
            suma=suma+12;
        }
        else if(wiersz[i]=='m')
        {
            suma=suma+13;
        }
        else if(wiersz[i]=='n')
        {
            suma=suma+14;
        }
        else if(wiersz[i]=='o')
        {
            suma=suma+15;
        }
        else if(wiersz[i]=='p')
        {
            suma=suma+16;
        }
        else if(wiersz[i]=='q')
        {
            suma=suma+17;
        }
        else if(wiersz[i]=='r')
        {
            suma=suma+18;
        }
        else if(wiersz[i]=='s')
        {
            suma=suma+19;
        }
        else if(wiersz[i]=='t')
        {
            suma=suma+20;
        }
        else if(wiersz[i]=='u')
        {
            suma=suma+21;
        }
        else if(wiersz[i]=='v')
        {
            suma=suma+22;
        }
        else if(wiersz[i]=='w')
        {
            suma=suma+23;
        }
        else if(wiersz[i]=='x')
        {
            suma=suma+24;
        }
        else if(wiersz[i]=='y')
        {
            suma=suma+25;
        }
        else if(wiersz[i]=='z')
        {
            suma=suma+26;
        }
        else if(wiersz[i]=='A')
        {
            suma=suma+27;
        }
        else if(wiersz[i]=='B')
        {
            suma=suma+28;
        }
        else if(wiersz[i]=='C')
        {
            suma=suma+29;
        }
        else if(wiersz[i]=='D')
        {
            suma=suma+30;
        }
        else if(wiersz[i]=='E')
        {
            suma=suma+31;
        }
        else if(wiersz[i]=='F')
        {
            suma=suma+32;
        }
        else if(wiersz[i]=='G')
        {
            suma=suma+33;
        }
        else if(wiersz[i]=='H')
        {
            suma=suma+34;
        }
        else if(wiersz[i]=='I')
        {
            suma=suma+35;
        }
        else if(wiersz[i]=='J')
        {
            suma=suma+36;
        }
        else if(wiersz[i]=='K')
        {
            suma=suma+37;
        }
        else if(wiersz[i]=='L')
        {
            suma=suma+38;
        }
        else if(wiersz[i]=='M')
        {
            suma=suma+39;
        }
        else if(wiersz[i]=='N')
        {
            suma=suma+40;
        }
        else if(wiersz[i]=='O')
        {
            suma=suma+41;
        }
        else if(wiersz[i]=='P')
        {
            suma=suma+42;
        }
        else if(wiersz[i]=='Q')
        {
            suma=suma+43;
        }
        else if(wiersz[i]=='R')
        {
            suma=suma+44;
        }
        else if(wiersz[i]=='S')
        {
            suma=suma+45;
        }
        else if(wiersz[i]=='T')
        {
            suma=suma+46;
        }
        else if(wiersz[i]=='U')
        {
            suma=suma+47;
        }
        else if(wiersz[i]=='V')
        {
            suma=suma+48;
        }
        else if(wiersz[i]=='W')
        {
            suma=suma+49;
        }
        else if(wiersz[i]=='X')
        {
            suma=suma+50;
        }
        else if(wiersz[i]=='Y')
        {
            suma=suma+51;
        }
        else if(wiersz[i]=='Z')
        {
            suma=suma+52;
        }
        c=1;

                    }
                    if(c==1)
                    {
                        break;
                    }

                }
                if(c==1)
                    {
                        break;
                    }

            }


        }

    }
    else
    {
        cout<<"nie mozna otworzyc pliku"<<endl;
    }
cout<<"suma: "<<suma<<endl;
    return 0;
}
