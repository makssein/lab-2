/* Ввести натуральные числа A, B и C. Если A больше B и B больше C,
 * то вывести A-B-C, если B больше A и B  кратно C, то вывести B/С+B-A,
 * в остальных случаях вывести A+B+C.
 *
 * Сеин Максим
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a, b, c;
    cout << "Введите число A" << endl;
    cin >> a;

    cout << "Введите число B" << endl;
    cin >> b;

    cout << "Введите число C" << endl;
    cin >> c;

    if (a > b && b > c) {
        cout << a-b-c << endl;
    }
    else if(b > a && b%c==0) {
        cout << b/c+b-a << endl;
    }
    else {
        cout << a+b+c << endl;
    }

    return 0;
}