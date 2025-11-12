// 03-counter.cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter an integer value, the input ends if it is 0: ";
    int x; long long sum=0; int pos=0, neg=0, count=0;
    while(cin>>x && x!=0){
        if(x>0) pos++; else if(x<0) neg++;
        sum += x; count++;
    }
    cout<<"The number of positives is "<<pos<<"\n";
    cout<<"The number of negatives is "<<neg<<"\n";
    cout<<"The total value is "<<sum<<"\n";
    if(count>0){
        double avg = (double)sum / count;
        cout.setf(ios::fixed); cout<<setprecision(2);
        cout<<"The average value is "<<avg<<"\n";
    } else cout<<"The average value is 0.00\n";
    return 0;
}
