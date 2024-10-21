// zad 1c
// #include <iostream> //biblioteka jezyku C++
// int main() {
// std::cout << "Hello, World!" << std::endl; //funkcja wyjscia
// return 0;
// }
//
// zad 1d
// #include <iostream>
// using namespace std; //funkcja automatycznego wstawiania std
// int main ()
// { cout << "Hello World";
// return(0);
// }
//

#include <iostream>
#include <cmath>
using namespace std;
void trojkat(char znak,int dlugosc) // niestety nie dziala kod ANSI, nie jestem pewny czy to wina C-Lion, postanowiłem więc stworzyc funkcje bez koloru.
{
    cout << endl;
    for (int i=0;i<dlugosc;i++) {
        for(int j=0;j<=i;j++) {
            cout  <<znak;
        }
        cout << endl;
    }
}
int main() {
    double liczba_pi = 3.141592653589793;
    int wybor;
    do { // stworzeie menu do zadania 2, dzieki ktoremu mozemy przechodzic do poszczegolnych przykladow
        cout << endl << "Menu do zadania drugiego: " << endl;
        cout << "1. (zadanie 2a)" << endl;
        cout << "2. (zadanie 2b)" << endl;
        cout << "3. (zadanie 2c)" << endl;
        cout << "4. (zadanie 2d)" << endl;
        cout << "5. (zadanie 2e)" << endl;
        cout << "6. (zadanie 2f)" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybierz zadanie: ";
        cin >> wybor; // wprowadzenie argumentu switch (wybieranie dzialania przez uzytkownika )

        switch (wybor) { // zainicjalizowanie funkcji switch, co pozwoli nam wybierać dane zadanie do wykonania.
            case 1: {
                // zadanie 2a
                double r, p;
                cout << "Podaj promien: ";
                cin >> r;
                p = r * r * liczba_pi;
                cout << "Pole koła = " << p << endl;
                break;
            }
            case 2: {
                // zadanie 2b
                double r_1;
                cout << "Podaj promien: ";
                cin >> r_1;
                cout << "v = " << 4.0 / 3.0 * liczba_pi * r_1 * r_1 * r_1 << endl;
                break;
            }
            case 3: {
                // zadanie 2c
                double a, b, c;
                cout << "Podaj a: ";
                cin >> a;
                cout << "Podaj b: ";
                cin >> b;
                c = sqrt(pow(a, 2) + pow(b, 2));
                cout << " c = " << c << endl;
                break;
            }
            case 4: {
                // zadanie 2d
                double a_2, b_2, kat,c;
                cout << "Podaj a: ";
                cin >> a_2;
                cout << "Podaj b: ";
                cin >> b_2;
                cout << "Podaj kat gamma w stopniach: ";
                cin >> kat;
                double radiany_kat = kat * liczba_pi / 180;
                c = sqrt(pow(a_2, 2) + pow(b_2, 2) - 2 * a_2 * b_2 * cos(radiany_kat));
                cout << "c = " << c << endl;
                break;
            }
            case 5: {
                // zadanie 2e
                double a_3, n, p_2, k;
                cout << "Podaj a: ";
                cin >> a_3;
                cout << "Podaj n: ";
                cin >> n;
                cout << "Podaj p: ";
                cin >> p_2;
                k = a_3 * pow(1+p_2/100, n);
                cout << "k = " << k << endl;
                break;
            }
            case 6: {
                // zadanie 2f
                double a_4, b_3, c_3, w;
                cout << "Podaj a: ";
                cin >> a_4;
                cout << "Podaj b: ";
                cin >> b_3;
                cout << "Podaj c: ";
                cin >> c_3;
                if (b_3 + c_3 == 0) {
                    cout << "Blad, suma zmiennych b i c wynosi 0" << endl;
                } else {
                    w = (a_4 * b_3) / (b_3 + c_3) + (a_4 * c_3) / (b_3 + c_3);
                    cout << "W = " << w << endl;
                }
                break;
            }
            case 0: {
                cout << "Wyjscie z programu." << endl;
                break;
            }
            default: {
                cout << "Niepoprawny wybor, sprobuj ponownie." << endl;
            }
        }
    } while (wybor != 0);

    // zadanie 3
    int wybor_2;
    do {
        cout << endl << "Menu do zadania trzeciego" << endl; //stworzenie menu do zadania 3
        cout << "1. (zadanie 3a)" << endl;
        cout << "2. (zadanie 3b)" << endl;
        cout << "3. (zadanie 3c)"  << endl;
        cout << "4. (zadanie 3d)" << endl;
        cout << "5. (zadanie dodatkowe)" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "wybierz zadanie: ";
        cin >> wybor_2;
        switch (wybor_2) { //zastosowanie funkcji switch, aby móc wybierać dane zadanie do wykonania, podobnie jak w zadaniu drugim
            //zadanie 3a
            case 1: {
                int a,b,s;
                cout << "podaj a: ";
                cin >>a;
                cout << "podaj b: ";
                cin >>b;
                if (a>b) {
                    cout << endl << "pierwsza liczba jest wieksza od drugiej" << endl;
                }
                else if (a==b) {
                    cout << " liczby sa rowne" << endl;
                }
                else {
                    cout << "druga liczba jest wieksza od pierwszej" << endl;
                }
                s=a+b;
                cout << "suma wprowadzonych liczb wynosi: " << s << endl;
                break;
            }
            //zadanie 3b
            case 2: {
                int a_1,b_1,c,suma,n=0;
                float srednia;
                cout << "podaj a: ";
                cin >>a_1;
                n+=1;
                cout << "podaj b: ";
                cin >>b_1;
                n+=1;
                cout << "podaj c: ";
                cin >> c;
                n+=1;
                suma=a_1+b_1+c;
                srednia = suma/n;
                if (srednia>5) {
                    cout << "wysoka srednia";
                }
                else {
                    cout << "Nie" << endl;
                }
                cout << srednia << "  " << endl << suma;
                break;
            }
            //zadanie 3c
            case 3: {
                int wsp,bx,w_wolny,delta,p_1,q,x1,x2;
                cout << "podaj wspolczynnik kierunkowy: ";
                cin >> wsp;
                cout << "podaj b: ";
                cin >>bx;
                cout << "podaj wyraz wolny: ";
                cin >> w_wolny;
                delta = pow(bx,2) -4*wsp*w_wolny;
                p_1 = -bx/2*wsp;
                cout << "x wierzcholka: " << p_1 << " y wierzcholka: " << q << endl;
                if (delta>0) {
                    x1 = (-bx + sqrt(delta)) / 2*wsp;
                    x2= (-bx - sqrt(delta)) / 2*wsp;
                    cout <<"x1: " << x1 << " " <<"x2: " << x2 << endl;
                }
                else if (delta==0) {
                    cout <<"x0 = " << p_1;
                }
                else {
                    cout << "brak miejsc zerowych";
                }
                break;
            }
            //zadanie 3d
            case 4: {
                char znak;
                int dl;
                cout << "podaj znak ascii: ";
                cin >> znak;
                cout << "podaj dlugosc trojkata: ";
                cin >> dl;
                cout << endl;
                for (int i=0;i<dl;i++) {
                    for(int j=0;j<=i;j++) {
                        cout << znak;
                    }
                    cout << endl;
                }
                cout << endl;
                break;
            }
            case 5: {
                //zadanie dodatkowe, wywolanie trojkata za pomocą funkcji
                char znak_1;
                int dl_1;
                cout << "podaj znak ascii: ";
                cin >> znak_1;
                cout << "podaj dlugosc trojkata: ";
                cin >> dl_1;
                trojkat(znak_1,dl_1);
                break;
            }
            case 0:
            {
                cout << "wyjscie z programu";
                break;
            }
            default: {
                cout << "podano zly numer, sproboj ponownie";
                break;
            }
        }
        } while (wybor_2!=0);

        return 0;
    }



