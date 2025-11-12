// 02-polygon-area.cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; double s;
    cout<<"Enter the number of sides: ";
    if(!(cin>>n)) return 0;
    cout<<"Enter the length of a side: ";
    cin>>s;
    double area = (n * s * s) / (4.0 * tan(M_PI / n));
    cout<<fixed<<setprecision(2);
    cout<<"The area of the polygon is "<<area<<"\n";
    return 0;
}
