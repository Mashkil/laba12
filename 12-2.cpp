# include <iostream>
# include <windows.h>
# include <cmath>

using namespace std;

int main()

{
    SetConsoleCP(1251); //Устанавливаем кодовые страницы ввода и вывода, используемые консолью, связанные с вызывающим процессом
    SetConsoleOutputCP(1251);

    char S; //Объявляем переменные и вводим их
    int N;
    cout << "Введите символ направления («С» — север, «З» — запад, «Ю» — юг, «В» — восток): ";
    cin >> S;
    cout << "Введите цифровую команду для робота (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо): ";
    cin >> N;
    cout << "Направление - ";
    switch (N) {
    case 1: switch (S) {
    case 'С': cout << "З"; break;
    case 'Ю': cout << "В"; break;
    case 'З': cout << "Ю"; break;
    case 'В': cout << "С"; break;
    } break;
    case -1: switch (S) {
    case 'С': cout << "В"; break;
    case 'Ю': cout << "З"; break;
    case 'З': cout << "С"; break;
    case 'В': cout << "Ю"; break;
    } break;
    case 0: switch (S) {
    case 'С': cout << "С"; break;
    case 'Ю': cout << "Ю"; break;
    case 'З': cout << "З"; break;
    case 'В': cout << "В"; break;
    } break;
    }

    cout << endl;
    system("pause");
    return 0;
}
