#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cont = 0, casos, pt_maria = 0, pt_joao = 0, x, d, cont2 = 0;
    cin >> casos;
    while (cont < casos){
        while (cont2 < 3){
            cin >> x;
            cin >> d;
            pt_joao = pt_joao + (x * d);
            cont2++;
        }
        cont2 = 0;
        while (cont2 <  3){
            cin >> x;
            cin >> d;
            pt_maria = pt_maria + (x * d);
            cont2++;
        }
        cont2 = 0;
        if (pt_maria > pt_joao){
            cout << "MARIA" <<endl;
        }else{
            cout << "JOAO" <<endl;
        }
        pt_maria = 0;
        pt_joao = 0;
        cont++;
    }
    return 0;
}
