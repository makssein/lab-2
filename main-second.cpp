/* Ввести цифру N, при помощи оператора switch
 * вывести название цифры. Предусмотреть обработку
 * ошибочного ввода N.
 *
 * Сеин Максим
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    unsigned short n;
    cout << "Введите цифру" << endl;
    cin >> n;

    switch(n){
        case 0: cout << "Ноль" << endl;
            break;
        case 1: cout << "Один" << endl;
            break;
        case 2: cout << "Два" << endl;
            break;
        case 3: cout << "Три" << endl;
            break;
        case 4: cout << "Четыре" << endl;
            break;
        case 5: cout << "Пять" << endl;
            break;
        case 6: cout << "Шесть" << endl;
            break;
        case 7: cout << "Семь" << endl;
            break;
        case 8: cout << "Восемь" << endl;
            break;
        case 9: cout << "Девять" << endl;
            break;
        default: cout << "Вы ввели не цифру" << endl;
    }
    
    return 0;
}