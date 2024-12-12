#include <iostream>

using namespace std;
int silnia (int n){
    int k = 1;
    for (int i = 1; i <= n; i++){
        k = k*i;
    }
    return k;
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
	cout << "Silnia: " << silnia(a) <<endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
