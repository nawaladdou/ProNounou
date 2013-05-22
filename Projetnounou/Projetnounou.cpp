// Projetnounou.cpp : définit le point d'entrée pour l'application console.
//


#include "stdafx.h"
#include <iostream>
using namespace std;
 
int main()
{
    int i;
    int t[10];
 
    for (i = 0; i < 10; i++)
        t[i] = i * i;
 
    for (i = 0; i < 10; i++)
        cout << t[i] << endl;
 
    return 0;
}
