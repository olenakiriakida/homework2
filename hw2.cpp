
#include <iostream>
using namespace std;

class Human {
public:

    int hair_length = 40; //сантиметри 
    int arm_fingers = 10;
    string eye_color = "green";
    string hair_color = "red";
    string name;

public:
    void Talk(string phrase) {
        cout << phrase;
    }
    void Play_guitar(Guitar& what) {
        what.play_guitar();
    }
    void Eat(string meal) {
        cout << name << " з'їв " << meal;
    }
    void Read(Book& what) {
        what.Read_book();
    }
    void Open_window(Room& what) {
        cout << "Дуже спекотно ";
        what.Window_open();
    }
    void Pet_cat(Cat& who) {
        cout << "Яка чудова кішка! ";
        who.Mrrr();
    }
};


class Room {
public:

    int length = 10; //метри 
    int width = 7;
    string wall_color = "pink";
    int height = 4;
    string door_color = "white";
    string name;

public:
    void Door_open() {
        cout << "Двері відкриті";
    }
    void Window_open() {
        cout << "Вікна відкрито";
    }
    void Light_on() {
        cout << "Світло ввімкнено";
    }
    void Curtain_closed() {
        cout << "Штори закрито";
    }
    void TV() {
        cout << "Телевізор увімкнено";
    }
};


class Cat {
public:

    int leg_amount = 4;
    int ears_amount = 2;
    string color = "gray";
    string second_color = "black";
    string name;

public:
    void Mrrr() {
        cout << name << "Кіт мурчить";
    }
    void Eat(string meal) {
        cout << "Кіт їсть " << meal;
    }
    void Stretch() {
        cout << name << " потягнувся";
    }
    void Open_door(Room& what) {
        what.Door_open();
    }
    void Hiss() {
        cout << name << " шипить";
    }
};


class Book {
public:

    int pages_amount = 250;
    string book_name = "Тарантула";
    string author = "Боб Ділан";
    string year = "1971";
    string publishing_house = "Macmillan & Scribner";

public:
    void Read_book() {
        cout << "Ви прочли книгу";
    }
    void Put_bookmark(string num_page) {
        cout << "Ви встановили закладку на " << num_page << " сторінці";
    }
    void Open() {
        cout << "Книгу відкрито";
    }
    void Close() {
        cout << "Книгу закрито";
    }
    void Make_note(string note) {
        cout << "Ви залишили замітку: " << note;
    }
};


class Guitar {
public:

    int string_amount = 6;
    int fret_amount = 15;
    int belt_amount = 1;
    string guitar_color;
    string company_name;

public:
    void Tune_guitar() {
        cout << "Гітару настроєно";
    }
    void play_guitar() {
        cout << "Гітара грає";
    }
    void Change_string(string number_of_string) {
        cout << number_of_string << " замінено";
    }
    void Practice_guitar() {
        cout << "Приктика на гітарі";
    }
    void Put_capo(string number_of_fret) {
        cout << "Капо встановлено на " << number_of_fret << "лад";
    }
    void Put_in_case() {
        cout << "Гітара в чохлі";
    }
};

int main()
{
    Human h;
    h.name = "Nick";

    Human v;
    v.name = "Martha";

    Cat c;
    c.name = "Sima";
    
    Room r;
    r.name = "Bedroom";

    Guitar g;
    g.guitar_color = "yellow";
    g.company_name = "Gibson";

    Book b;

    h.Pet_cat(c);
    h.Read(b);
    h.Play_guitar(g);
    c.Open_door(r);
}