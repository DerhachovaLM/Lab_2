#include <iostream>
#include <Windows.h>
#include <iomanip>
//Завдання 1
int T_1()
{
    char name[50];
    std::cout << "Завдання 1" << std::endl;
    std::cout << std::endl;
    std::cout << "Як вас звуть?" << std::endl;
    std::cin >> name;
    std::cin.ignore();
    std::cout << "Доброго дня, " << name << "!" << std::endl;
    system("pause");
    return 0;
}
//Завдання 2
int T_2()
{
    char line[250];
    std::cout << "Завдання 2" << std::endl;
    std::cout << std::endl;
    std::cout << "Введить рядок довільного тексту:" << std::endl;
    std::cin.getline(line, 350);
    std::cout << std::endl;
    std::cout << "Ваш текст:" << std::endl;
    std::cout << line << std::endl;
    system("pause");
    return 0;

}
//Завдання 3
int T_3()
{
    std::cout << "Завдання 3" << std::endl;
    std::cout << std::endl;
    int a = 5, b = 4;
    std::cout << "А = " << a << "     " << "B = " << b << std::endl;
    std::cout << "\nНатисніть 'Enter' щоб змінити значення місцями...." << std::endl;
    std::cin.ignore();
    int temp;
    temp = a;
    a = b;
    b = temp;
    std::cout << "А = " << a << "     " << "B = " << b << std::endl;
    system("pause");
    return 0;
}
//Завдання 4
int T_4()
{
    std::cout << "Завдання 4" << std::endl;
    std::cout << std::endl;
    int a = 2, b = 5, c = 3;
    std::cout << "А = " << a << "     " << "B = " << b << "     " << "C = " << c << std::endl;
    std::cout << "\nНатисніть 'Enter' щоб змінити значення місцями...." << std::endl;
    std::cin.ignore();
    int temp;
    temp = a;
    a = c;
    c = b;
    b = temp;
    std::cout << "А = " << a << "     " << "B = " << b << "     " << "C = " << c << std::endl;
    system("pause");
    return 0;
}
//Завдання 5
int T_5()
{
    std::cout << "Завдання 5" << std::endl;
    std::cout << std::endl;
    int a = 2, b = 5, c = 3, d = 1;
    std::cout << "А = " << a << "     " << "B = " << b << "     " << "C = " << c << "     " << "D = " << d << std::endl;
    std::cout << "\nНатисніть 'Enter' щоб змінити значення місцями...." << std::endl;
    std::cin.ignore();
    int temp;
    temp = a;
    a = d;
    d = c;
    c = b;
    b = temp;
    std::cout << "А = " << a << "     " << "B = " << b << "     " << "C = " << c << "     " << "D = " << d << std::endl;
    system("pause");
    return 0;
}
//Завдання 6
int T_6()
{
    std::cout << "Завдання 6" << std::endl;
    std::cout << std::endl;
    char name[50], work[100];
    int age;
    std::cout << "Як Вас звуть?" << std::endl;
    std::cin >> name;
    std::cout << "Скільки Вам років?" << std::endl;
    std::cin >> age;
    std::cin.ignore(32767, '\n');
    std::cout << "Де Ви навчаєтеся?" << std::endl;
    std::cin.getline(work, 100);
    std::cout << "\nНатисніть 'Enter' для отримання результату...." << std::endl;
    std::cin.ignore();
    std::cout << "Доброго дня, " << name << "!" << std::endl;
    std::cout << "Вітаємо Вас, Вам усього " << age << ", а Ви вже ведете діалог з комп’ютером!" << std::endl;
    std::cout << work << " буде пишатися Вами!" << std::endl;
    system("pause");
    return 0;
}
//Завдання 7
int T_7()
{
    std::cout << "Завдання 7" << std::endl;
    std::cout << std::endl;
    char surname[30], name[30], patronymic[30], sex[15], address[30], work[30], group[20], date[20], hobby[30], phone[15];

    std::cout << "Прізвище?" << std::endl;
    std::cin >> surname;

    std::cout << "Ім'я?" << std::endl;
    std::cin >> name;

    std::cout << "По батьковій?" << std::endl;
    std::cin >> patronymic;

    std::cout << "Стать?" << std::endl;
    std::cin >> sex;

    std::cout << "День народження?" << std::endl;
    std::cin >> date;

    std::cin.ignore();

    std::cout << "Адреса?" << std::endl;
    std::cin.getline(address, 30);

    std::cout << "Номер телефону?" << std::endl;
    std::cin >> phone;

    std::cin.ignore();

    std::cout << "Місце навчання?" << std::endl;
    std::cin.getline(work, 30);

    std::cout << "Група?" << std::endl;
    std::cin >> group;

    std::cin.ignore();

    std::cout << "Хоббі?" << std::endl;
    std::cin.getline(hobby, 30);



    system("cls");


    std::cout << "\n\t\t\t\t АНКЕТА: " << std::endl;
    std::cout << "Прізвище: " << std::setw(17) << std::left << surname << "  Ім'я: " << std::setw(15) << std::left << name << "  По батьковій: " << patronymic << std::endl;
    std::cout << "Номер телефону:  " << std::setw(35) << std::left << phone << "Хоббі: " << hobby << std::endl;
    std::cout << "Місце навчання:  " << std::setw(35) << std::left << work << "Група: " << group << std::endl;
    std::cout << "Дата народження: " << std::setw(35) << std::left << date << "Стать: " << sex << std::endl;
    std::cout << "Адреса: " << address << std::endl;

    system("pause");
    return 0;

}
//Завдання 8
int T_8()
{
    std::cout << "Завдання 8" << std::endl;
    std::cout << std::endl;
    int x, y;
    std::cout << "Задумайде будь яке число" << std::endl;
    Sleep(2000);
    std::cout << "Додайте до нього 1" << std::endl;
    Sleep(3000);
    std::cout << "Домножте на 2" << std::endl;
    Sleep(3000);
    std::cout << "Відніміть 7" << std::endl;
    Sleep(3000);
    std::cout << "Додайте 5" << std::endl;
    Sleep(3000);
    std::cout << "Введіть те що отримали : ";
    std::cin >> x;
    y = ((((x - 5) + 7) / 2) - 1);
    std::cout << "Загадане число : " << y << std::endl;
    system("pause");
    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    T_1();
    system("cls");
    T_2();
    system("cls");
    T_3();
    system("cls");
    T_4();
    system("cls");
    T_5();
    system("cls");
    T_6();
    system("cls");
    T_7();
    system("cls");
    T_8();
    system("cls");
    return 0;
}