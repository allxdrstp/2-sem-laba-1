#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class book {
private:
    string name;
    string author;
    int ekz;
    int read;
public:
    book(const string& n, const string& a, int k, int r) : name(n), author(a), ekz(k), read(r) {}
    string Name() {
        return name;
    }
    string Author() {
        return author;
    }
    int Ekz() {
        return ekz;
    }
    int Read() {
        return read;
    }
    double sred() {
        double sr;
        sr = read/ekz;
        return sr;
    }
    void print() const {
        cout << "Name: " << name << ", author: " << author << ", number of books: " << ekz << ", readers: " << read << endl;
    }
};
int main()
{
    vector <book> Book = {
      book("Idiot", "Dostoevskiy", 45, 100),
      book("Lord of the Flies", "Golding", 60, 70),
      book("Flowers for Algernon", "Keyes", 35, 50),
    };
    for (int i = 0; i < 3; ++i) {
        Book[i].print();
    }
}