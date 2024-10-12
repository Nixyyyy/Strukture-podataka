#include <iostream>
using namespace std;

// LABORATORIJSKE VJEZBE 1.

// 1. zadatak

// 2. zadatak

struct Osoba {
    string ime;
    string prezime;
    int godinaRodenja;
    Osoba* sljedeci; 
};

void dodajNaPocetak(Osoba* &lista, const string &ime, const string &prezime, int godinaRodenja) {
    Osoba* novaOsoba = new Osoba{ime, prezime, godinaRodenja, lista};
    lista = novaOsoba;
}

void dodajNaKraj(Osoba* &lista, const string &ime, const string &prezime, int godinaRodenja) {
    Osoba* novaOsoba = new Osoba{ime, prezime, godinaRodenja, NULL};

    if (lista == NULL) {
        lista = novaOsoba;
    } else {
        Osoba* temp = lista;
        while (temp->sljedeci != NULL) {
            temp = temp->sljedeci;
        }
        temp->sljedeci = novaOsoba;
    }
}

void ispisiListu(Osoba* lista) {
    Osoba* temp = lista;
    while (temp != NULL) {
        cout << "Ime: " << temp->ime << ", Prezime: " << temp->prezime
             << ", Godina rodenja: " << temp->godinaRodenja << endl;
        temp = temp->sljedeci;
    }
}

Osoba* pronadiPoPrezimenu(Osoba* lista, const string &prezime) {
    Osoba* temp = lista;
    while (temp != NULL) {
        if (temp->prezime == prezime) {
            return temp;
        }
        temp = temp->sljedeci;
    }
    return NULL;
}

void brisiPoPrezimenu(Osoba* &lista, const string &prezime) {
    Osoba* temp = lista;
    Osoba* prethodni = NULL;

    while (temp != NULL && temp->prezime != prezime) {
        prethodni = temp;
        temp = temp->sljedeci;
    }

    if (temp == NULL) {
        cout << "Osoba s prezimenom " << prezime << " nije pronadena." << endl;
        return;
    }

    if (prethodni == NULL) {
        lista = temp->sljedeci; 
    } else {
        prethodni->sljedeci = temp->sljedeci;
    }

    delete temp;
    cout << "Osoba s prezimenom " << prezime << " je obrisana." << endl;
}

int main() {
    Osoba* lista = NULL; 

    dodajNaPocetak(lista, "Ivan", "Ivic", 1995);
    dodajNaKraj(lista, "Ana", "Anic", 1993);
    dodajNaKraj(lista, "Marko", "Markic", 1997);

    cout << "Ispis liste:" << endl;
    ispisiListu(lista);

    string prezimeZaPretragu = "Anic";
    Osoba* pronadjena = pronadiPoPrezimenu(lista, prezimeZaPretragu);
    if (pronadjena) {
        cout << "Pronadena osoba: " << pronadjena->ime << " " << pronadjena->prezime << endl;
    } else {
        cout << "Osoba s prezimenom " << prezimeZaPretragu << " nije pronadena." << endl;
    }

    brisiPoPrezimenu(lista, "Ivic");

    cout << "Ispis liste nakon brisanja:" << endl;
    ispisiListu(lista);

    while (lista != NULL) {
        Osoba* temp = lista;
        lista = lista->sljedeci;
        delete temp;
    }

    return 0;
}

// 3. zadatak

// 4. zadatak

// 5. zadatak

// 6. zadatak

// 8. zadatak

// 9. zadatak

// 10. zadatak

// 11. zadatak

