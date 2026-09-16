#include <iostream>
#include <string>
#include <math.h>

using namespace std;

typedef unsigned long long ull_num;

double logab(double a, double b) {
    return log(a) / log (b);
}
//через шифт и выделение слова + одна скобка = все выделеное обернется в скобки
int main() {
    setlocale(LC_ALL, "ru-RU");
    double x = 2;
    //cin >> x;   
    double a, b;
    cin >> a >> b;
    double abs_v = abs(-4);
    double sqrt_v = sqrt(9);
    double exp_v = exp(1);
    double pow_v = pow(2, x);
    double log_v = log(exp_v);
    double log2_v = log2(8);
    double log10_v = log10(100);
    double logab_v = logab(16, 2);
    double PI = acos(-1);
    cout
        << abs_v << endl
        << sqrt_v << endl
        << exp_v << endl
        << pow_v << endl
        << log_v << endl
        << log2_v << endl
        << log10_v << endl
        << logab_v << endl
        << round(sin(PI)) << endl
        << "floor:" << floor(0.4) << endl
        << "ceil:" << ceil(0.4) << endl
        << endl;

    //zadanie1 y = (2^x + e^(2*x)) / x^2 * ln(x)
    double y = (pow(2.0, x) + exp(2.0 * x)) / pow(x, 2.0) * log(x);
    cout << "Answer:" << y << endl;

    //zadanie2 h(a,b) = a / (1 + b^2) + b / (1 + a^2) - (a - b)^3
    double h = zadanie2(a, b);
    cout << "Answer2: " << h << endl;

    //zadanie3 logx(pow(x, 2)/sqrt(x))^3 


    /*
        домашка
        double a,b;
        double f = 3 * pow(a, 2) + pow(b, 2) - 1 / abs(a + b) + 100;
        cout << "Answer: " << f <<endl;
    */
        
}

int matematics() {
    int x, y;
    cin >> x;
    double abs_v = abs(-4);
    double sqrt_v = sqrt(9);
    double exp_v = exp(1);
    double pow_v = pow(2, x);
    double log_v = log(exp_v);
    double log2_v = log2(8);
    double log10_v = log10(100);
    double logab_v = logab(16, 2);
    double PI = acos(-1);
    cout
        << abs_v << endl
        << sqrt_v << endl
        << exp_v << endl
        << pow_v << endl
        << log_v << endl
        << log2_v << endl
        << log10_v << endl
        << logab_v << endl
        << round<int>(sin(PI)) << endl
        << "floor:" << floor(0.4) << endl
        << "ceil:" << ceil(0.4) << endl
        << endl;

    // y = (2^x + e^(2*x)) / x^2 * ln(x)

    y = (pow(2, x) * exp(2 * x)) / (pow(x, 2) * log(x));
    cout << endl;
    return 0;
}

int biblioteka() {
    bool boolean_value = true;

    short short_number = -30000;
    unsigned short u_short_number = 60000;

    int int_digit = -10000000;
    unsigned int u_int_number = 10000000;

    long long_number = -10000000000;
    unsigned long u_long_number = 10000000000;

    long long long_long_number = -10000000000000;
    unsigned long long u_long_long_number = 10000000000000;

    float float_number = 123.03; // размер как int
    double double_number = 123.03; //x2 от float
    long double long_double_number = 123.03;

    double bin_number = 0b11;
    double oct_number = 011;
    double hex_number = 0x11;

    auto num = 132131.23;
    ull_num value = 123;

    char char_value = 'v';
    string string_value = "Stroka";

    cout << "Содержимое переменной: " << num << '\n';
    const float PI = 3.14159;
    /*
        Окончание работы главной функции и вместе с ней программы
    */
    bool boolean_value = true;

    short short_number = -30000;
    unsigned short u_short_number = 60000;

    int int_digit = -10000000;
    unsigned int u_int_number = 10000000;

    long long_number = -10000000000;
    unsigned long u_long_number = 10000000000;

    long long long_long_number = -10000000000000;
    unsigned long long u_long_long_number = 10000000000000;

    float float_number = 123.03; // размер как int
    double double_number = 123.03; //x2 от float
    long double long_double_number = 123.03;

    double bin_number = 0b11;
    double oct_number = 011;
    double hex_number = 0x11;

    auto num = 132131.23;
    ull_num value = 123;

    char char_value = 'v';
    string string_value = "Stroka";

    //cout << "Содержимое переменной: " << num << '\n';

    /*
        Окончание работы главной функции и вместе с ней программы
    */


    //string str;
    //getline(cin, str);
    //string str2 = str + "zxc";
    //float num1 = 12 / 3;
    //cout << "Содержимое: " << str << endl;

    const double PI = acos(-1);
    //cout << "Содержимое: " << PI << '\n' << "Размер переменной: " << sizeof(PI) << endl; // размер в байтах

    //char char_v = 'a';
    //cout << "Содержимое: " << char_v << '\n' << "Размер переменной: " << sizeof(char_v) << endl;

    //bool bolean = false;
    //cout << "Содержимое: " << bolean << '\n' << "Размер переменной: " << sizeof(bolean) << endl;

    //int num4 = 0;
    //num4++; //++num4 инкримент /--num4 дикримент
    //cout << --num4 << endl;

    int num7 = 120;
    int num8 = 7;
    cout << "Деление: " << static_cast<double>(num7) / static_cast<double>(num8) << endl;
    double num9 = PI;
    cout << static_cast<int>(num9) << endl;
    // % - остаток от деления, далее подключаем библиотеку math,h возведение 2 в 8 степень - pow(2,8)

    return 0
}