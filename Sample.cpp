#include <iostream>
using namespace  std;
int  main (){
    int x  = 14;
    int y  = 3;
    cout<<"Enter Values of x and y ";
    cin>> x >> y;

    int d = y;

    int q = x / y;
    int r = x % y;


    cout<< q << " x " << d  << " + " << r;

    return 0;
}