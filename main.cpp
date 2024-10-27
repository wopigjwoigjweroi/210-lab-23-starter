#include <iostream>
#include <cstdlib> 
#include <fstream>
#include <iomanip>
#include <list>
#include "Goat.h"
using namespace std;

const int SZ_NAMES = 200, SZ_COLORS = 25, MAX_AGE = 20;

int select_goat(list<Goat> trip);
void delete_goat(list<Goat> &trip);
void add_goat(list<Goat> &trip, string [], string []);
void display_trip(list<Goat> trip);
int main_menu();

void add_goat(list<Goat> & trip, string name[], string color[]) {

    int names = rand() % SZ_NAMES;

    int colors = rand() % SZ_COLORS;

    int ages = rand() % MAX_AGE; 

    Goat goat(name[names], ages, color[colors]); 

    trip.push_back(goat); 
}

int main_menu() {

    int select; 

    cout << "**GOAT MANAGER 3001** \n" << "[1] Add a goat \n" << "[2] Delete a goat \n" << "[3] List goats \n" << "[4] Quit \n" << "Choice ->"; 
    cin >> select; 

    while (select < 1 || select > 4) {

        cin >> select; 
    }

    return select; 
}

int main() {
    srand(time(0));
    bool again;

    // read & populate arrays for names and colors
    ifstream fin("names.txt");
    string names[SZ_NAMES];
    int i = 0;
    while (fin >> names[i++]);
    fin.close();
    ifstream fin1("colors.txt");
    string colors[SZ_COLORS];
    i = 0;
    while (fin1 >> colors[i++]);
    fin1.close();




    return 0;
}

