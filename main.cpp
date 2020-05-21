#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

class Matrix{
private:

float tablica[3][3] ={
        {1.1, 2.1, 3.1},
        {1.1, 7.1, 1.1},
        {4.1, 1.1, 1.1},};
int wiersze=3;
int kolumny=3;
public:
Matrix()
{
    for(int i=0; i<kolumny; i++){
        for(int j=0; j<wiersze; j++){
         tablica[i][j]=0;
        }}
}

void wczytajdane()
    {
   float liczba;
    for(int i=0; i<kolumny; i++){
        for(int j=0; j<wiersze; j++){
         cout<<"podaj wartosc pola"<< i+1<<" kolumny: "<<j+1<<endl;
         cin>>liczba;
         tablica[i][j]=liczba;
    }}
    }

   void wypiszdane()
    {
    for(int i=0; i<kolumny; i++){
        for(int j=0; j<wiersze; j++){
         cout<<tablica[i][j]<<" ";

    }
    cout<<endl;cout<<endl;
    }
    }
friend Matrix * dodajMacierze(Matrix * m,Matrix * w);
};

Matrix * dodajMacierze(Matrix * m,Matrix * w) {
    Matrix * nowa=new Matrix();
        for(int i=0; i<nowa->kolumny; i++){
        for(int j=0; j<nowa->wiersze; j++){

    nowa->tablica[i][j]=m->tablica[i][j]+w->tablica[i][j];
    }}
    return nowa;
    };


int main()
{
    Matrix *m1=new Matrix();
    m1->wczytajdane();
    Matrix *m2=new Matrix();
    m1->wypiszdane();
    m2->wczytajdane();
   m2->wypiszdane();
Matrix* md=dodajMacierze(m1, m2);
cout<<"Wartosc dodanych macierzy: "<<endl;
 md->wypiszdane();
    return 0;
}
