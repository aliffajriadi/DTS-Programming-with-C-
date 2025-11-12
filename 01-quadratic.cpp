// 01-quadratic.cpp
#include <cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b,c;
    cout<<"Enter a, b, c: ";
    if(!(cin>>a>>b>>c)) return 0;
    double D = b*b - 4*a*c;
    if(D > 0){
        double r1 = (-b + sqrt(D)) / (2*a);
        double r2 = (-b - sqrt(D)) / (2*a);
        cout<<fixed<<setprecision(6);
        cout<<"The roots are: "<<r1<<" and "<<r2<<"\n";
    } else if(fabs(D) < 1e-12){
        double r = -b / (2*a);
        cout<<fixed<<setprecision(6);
        cout<<"The root is: "<<r<<"\n";
    } else {
        cout<<"The equation has no real roots\n";
    }
    return 0;
}