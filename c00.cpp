#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double triangle[3]={5,7,4};
    double a=triangle[0];
    double b=triangle[1];
    double c=triangle[2];
    if(a+b>c&&a-b<c){
        double p=(a+b+c)/2;
        float x=0.5;
        double s=pow(p*(p-a)*(p-b)*(p-c),x);
        cout << "S=" << s << endl;
        return 0;
    }else{
        cout << "This is not triangle..." << endl;
        return 0;
    }
    
}
