#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Pogona_vitticeps {
public:
    string animal_class;
    string suborder;
    string family;
    string body_length;

    void Swim(string temperature) {
        cout << "Heat the bath to " << temperature << "\n";
    }

    void Eat(string insect) {
        cout << "Catch the " << insect << "\n";
    }

    void Gestures(string head_bob) {
        cout << "Violent bob " << head_bob << "\n";
    }
};

class Hospital {
public:
    string H_name;
    string location;
    int available_beds;
    double rating;

    void Doctors_appointment(string doctor) {
        cout << "Choose a doctor: " << doctor << "\n";
    }

    void Examinations(string exam) {
        cout << "Choose an examination: " << exam << "\n";
    }

    void Registry(string reg) {
        cout << "Call the reception: " << reg << "\n";
        Sleep(1000);
        cout << "...subscriber is temporary unavailable, please call later...\n";
        Sleep(1000);
    }
};

class Date {
public:
    int m_day; 
    int m_month; 
    int m_year;

    void setDate(int day, int month, int year) 
    {
        m_day = day;
        m_month = month;
        m_year = year;
        cout << m_day << "." << m_month << "." << m_year << "\n";
    }
};

class Hand {
public:
    string bones;
    string muscles;
    string nerves;
    string vessels;
    int num_fingers;
    
    void Grab(string things) {
        cout << "I want grab " << things << "\n";
    }

    void Beat(string things) {
        cout << "I want beat " << things << "\n";
    }

    void Work(string things) {
        cout << "I work with " << things << "\n";
    }
};

class Book {
public:
    string name;
    int pages;
    double weight;

    void AboutBook() {
        cout << "Book " << name << " contains " << pages << " pages. " << "\n";
        cout << "Book takes " << weight << " mb." << "\n";
    }
};

int main() {

    Pogona_vitticeps lizard;

    lizard.animal_class = "Reptilia";
    lizard.suborder = "Iguania";
    lizard.family = "Agamidae";
    lizard.body_length = "25 sm";
    lizard.Swim("30-35 °C");
    lizard.Eat("zoophobus");
    lizard.Gestures("used by males just before mating");

    Hospital h;

    h.H_name = "Raylight";
    h.location = "Ukraine";
    h.available_beds = 10;
    h.Doctors_appointment("Pilulkin");
    h.Examinations("X-ray of the cervical spine");
    h.Registry("+380955289873");

    Date date;
    date.setDate(2, 4, 2024); 

    Hand hnd;

    hnd.bones = "Carpals, Metacarpals, Phalanges";
    hnd.muscles = "Thenar group, Hypothenar group, Metacarpal group";
    hnd.nerves = "Median nerve, Radial nerve, Ulnar nerve";
    hnd.vessels = "Arteries and Veins";
    hnd.num_fingers = 5;
    hnd.Grab("nose");
    hnd.Beat("nose");
    hnd.Work("nose");

    Book book;

    book.name = "War and Peace";
    book.pages = 1300;
    book.weight = 6.4;
    book.AboutBook();

    return 0;
}
