#include <iostream>
#include <cmath>

using namespace std;

double conversionV(double inch) {
    return pow(inch * 0.083333333333333, 3);
}

int box_capacity(int length, int width, int heigth) {

    int storeV = length * width * heigth;
    
    return storeV / conversionV(16);

}

int main() {

    int a,b,c;
    cin >> a >> b >> c;

    int res = box_capacity(a,b,c); 

    cout << res << endl;

    return 0;
}
