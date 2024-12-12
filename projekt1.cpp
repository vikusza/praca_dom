#include <iostream>

using namespace std;
void czy_pierwsza (int n){
    if (n == 0 || n == 1){
        cout << "liczba " << n << " nie jest ani pierwszej ani nie pierwszej" << endl;
        exit(0);
    }
    for (int i = 2; i <=n/2; i++){
        if (n%i == 0){
                cout << "liczba " << n << " nie jest pierwsza" << endl;
            exit(0);
        }
    }
    cout << "liczba " << n << " jest pierwsza" << endl;
}
int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        czy_pierwsza(b);
	cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
