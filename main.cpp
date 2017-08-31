#include <iostream>
#include <cstdlib>

using namespace std;

/*
string jesliCyfra(string wyrazDoRozwiniecia)
{
    string iloscWystapien="";
    for(int i=0; i<wyrazDoRozwiniecia.length(); i++)
    {
    if(wyrazDoRozwiniecia[i]>=48 && wyrazDoRozwiniecia[i]<=57)
           iloscWystapien=iloscWystapien+wyrazDoRozwiniecia[i];
           return iloscWystapien;
    }
}
string jesliLitera(string wyrazDoRozwiniecia, string iloscWystapien)
{
    char literaDoPowielenia
    int doDodaniaInt=0;
    string doDodania;
    string wyrazRozwiniety;
    for(int i=0; i<wyrazDoRozwiniecia.length(); i++)
    {
    if(wyrazDoRozwiniecia[i]<48 || wyrazDoRozwiniecia[i]>57)
        {
            doDodaniaInt=atoi(iloscWystapien.c_str()); //jesli znak jest litera to wyraz iloscWystapien zmieniamy na int i mamy doDodaniaInt czyli ilosc jaką trzeba wypisac dany znak

            for(int j=0; j<doDodaniaInt-1; j++)
                doDodania=doDodania+literaDoPowielenia; //nastepuje dopisanie do zmiennej doDodania znaku literaDoPowielenia "doDodaniaInt" razy
            wyrazRozwiniety=wyrazRozwiniety+doDodania;
            literaDoPowielenia=wyrazDoRozwiniecia[i];
            wyrazRozwiniety=wyrazRozwiniety+wyrazDoRozwiniecia[i];
            iloscWystapien="";
            doDodania="";

}
    }
    return wyrazRozwiniety;
}
string dodawacz (int doDodaniaInt, string literaDoPowielenia)
{
    string doDodania;
     for(int j=0; j<doDodaniaInt-1; j++)
                doDodania=doDodania+literaDoPowielenia; //nastepuje dopisanie do zmiennej doDodania znaku literaDoPowielenia "doDodaniaInt" razy
                return doDodania;
}

string tworzenieRozwiniecia (string iloscWystapien, string literaDoPowielenia, string doDodania)
{
    string wyrazRozwiniety;
    int doDodaniaInt=0;
    doDodaniaInt=atoi(iloscWystapien.c_str());
    for(int j=0; j<doDodaniaInt-1; j++)
            {
                doDodania=doDodania+literaDoPowielenia;
            }
            wyrazRozwiniety=wyrazRozwiniety+doDodania;
            return wyrazRozwiniety;
}



string rozwijacz2(string wyrazDoRozwiniecia, string iloscWystapien, int doDodaniaInt)
{
jesliCyfra(wyrazDoRozwiniecia);
jesliLitera(wyrazDoRozwiniecia,iloscWystapien);
dodawacz (doDodaniaInt, literaDoPowielenia);
tworzenieRozwiniecia ( iloscWystapien, literaDoPowielenia, doDodania);
}
*/
string rozwijacz(string wyrazDoRozwiniecia)
{
string iloscWystapien="";
string wyrazRozwiniety="";
string doDodania="";
char literaDoPowielenia='A';
int doDodaniaInt;

    for(int i=0; i<wyrazDoRozwiniecia.length(); i++)  //petla przechodzi po wszystkich znakach
    {
       if(wyrazDoRozwiniecia[i]>=48 && wyrazDoRozwiniecia[i]<=57)
           iloscWystapien=iloscWystapien+wyrazDoRozwiniecia[i]; //jesli znak jest cyfra to dopisuje go do wyrazu iloscWystapien

        if(wyrazDoRozwiniecia[i]<48 || wyrazDoRozwiniecia[i]>57)
        {
            doDodaniaInt=atoi(iloscWystapien.c_str()); //jesli znak jest litera to wyraz iloscWystapien zmieniamy na int i mamy doDodaniaInt czyli ilosc jaką trzeba wypisac dany znak

            for(int j=0; j<doDodaniaInt-1; j++)
                doDodania=doDodania+literaDoPowielenia; //nastepuje dopisanie do zmiennej doDodania znaku literaDoPowielenia "doDodaniaInt" razy
            wyrazRozwiniety=wyrazRozwiniety+doDodania;
            literaDoPowielenia=wyrazDoRozwiniecia[i];
            wyrazRozwiniety=wyrazRozwiniety+wyrazDoRozwiniecia[i];
            iloscWystapien="";
            doDodania="";
        }
    }
    doDodaniaInt=atoi(iloscWystapien.c_str());
    for(int j=0; j<doDodaniaInt-1; j++)
            {
                doDodania=doDodania+literaDoPowielenia;
            }
            wyrazRozwiniety=wyrazRozwiniety+doDodania;
    return wyrazRozwiniety;
}

int main()
{
string wyrazDoRozwiniecia="A";

cout<<"Podaj wyraz do rozwiniecia: ";
cin>>wyrazDoRozwiniecia;
cout<<endl<<"Wyraz rozwiniety to: "<<rozwijacz(wyrazDoRozwiniecia);
    return 0;
}
