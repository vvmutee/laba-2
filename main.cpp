#include <iostream>
using namespace std;
int main()
{
    int S, h, V;
    cin >> S >> h;
    
    if ((S > 0 && S < 100) && (h > 0 && h < 100)){
        V = (S * h)/3;
        cout << V;
    }
    else{
        cout << "Error";
    }
}