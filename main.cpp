//
//  main.cpp
//  Exercice_4
//
//  Created by Alexandre Leuthreau on 14/11/2021.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int x, y, z;
    int p;
    int dp;
    //int tmp;
    double aire;
    
    cout<<"------------------------------"<<endl;
    cout<<"CALCUL DE L'AIRE D'UN TRIANGLE"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"Entrez une valeur de AB = "<<endl;
    cin>>x;
    cout<<"Entrez une valeur de BC = "<<endl;
    cin>>y;
    cout<<"Entrez une valeur de CA = "<<endl;
    cin>>z;
    
    p = x + y + z;
    dp = p / 2;
    aire = sqrt(dp * (dp - x) * (dp - y) * (dp - z));
    
  
        if (x >= (y + z) )
        {
            cout<<"AB est invalide - Recommencez"<<endl;
            cout<<"------------------------------"<<endl;
        }
        else if (y >= (x + z))
        {
            cout<<"BC est invalide - Recommencez"<<endl;
            cout<<"------------------------------"<<endl;
        }
        else if (z >= (x + y))
        {
            cout<<"CA est invalide - Recommencez"<<endl;
            cout<<"------------------------------"<<endl;
        }
                else
                {
                    cout<<"Etat : OK"<<endl;
                    cout<<"---------"<<endl;
                    cout<<"Périmètre = "<<p<<" cm"<<endl;
                    cout<<"---------------------"<<endl;
                    cout<<"Demi-périmètre = "<<dp<<" cm"<<endl;
                    cout<<"---------------------"<<endl;
                    cout<<"Aire = "<<aire<<" cm2"<<endl;
                    cout<<"---------------------"<<endl;
                    cout<<endl;
                    
                    return 0;
                }
}
