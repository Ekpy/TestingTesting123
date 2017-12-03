// SingletonJKM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Singleton.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
static int Yvedimas(int B[],int n);
static int GyventojuSuma(int B[], int n);
void Isvedimas (int B[], int n, int skaic);

int main()
{
    //Kintamieji======================================
    ifstream in  ("Namas.txt"): //Yvedimo failas
    ofstream out ("Rezultatai.txt"): // Isvedimo failas
    int n,gyventSkaic=0;
	cout<<"*"<<endl;
    //Yvedimas========================================
    in<<n;// n gauna reiksme kiek butu yra
    int B[CMax]; //MAsyvas gauna n reiksmes dydy
	Singleton::Instance()>>Yvedimas(B, n);
    //Skaiciavimas====================================
	gyventSkaic= Singleton::Instance()->GyventojuSuma(B, n);//Iskvieciama ksaiciaviomo funkcija
    //Isvedimas=======================================
    Singleton::Instance()>>Isvedimas(B,n,gyventSkaic); //Isvedami duomenys
    return 0;
}
