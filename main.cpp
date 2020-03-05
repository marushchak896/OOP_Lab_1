#include <iostream>
#include <string>
#include "maksik.h"

using namespace std;

int main(){
   int d, m, y;
    cout << "Введіть дні"<< endl;
    cin >> d;
    if(d>31 || d<1){
        cout<< "Введіть дні ще раз"<< endl;
        cin >> d;

    }
      cout << "Введіть місяць"<< endl;
    cin >> m;
    if(m>12 || m<1){
        cout << "Введіть місяць ще раз" << endl;
           cin >> m;

       }
    cout << "Введіть рік"<< endl;
    cin >> y;
    Date real;
    real.set(d, m, y);
    real.get();
    real.get1();
 
}
