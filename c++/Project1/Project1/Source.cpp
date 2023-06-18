#include <iostream>
using namespace std;
int a = 5;
class One {
protected:
    int a;

public:
    One(int x) : a(x) {}
    virtual ~One() { cout << "one destructor" << a << endl; }
    virtual void change1(int x) { a += x; }
    One& change2(int x) {
        a += x;
        return *this;
    }
};
class Two : public One {
    int b;
    static int c;

public:
    Two(int x, int y) : One(x), b(y) { c += (x + y); }
    virtual ~Two() {
        cout << "Two destructor " << ::a << " " << b << " " << c << endl;
    }
    void change1(int x) {
        b += x;
        this->a = x;
        ::a = b + a;
    }
    void change2(int x) { c += x; }
};
int Two::c = 0;
int main() {
    int a = 3;
    One* p1, * p3;
    Two* p2;
    p1 = new One(2);
    p1->change1(7);

    p2 = new Two(4, 6);
    p2->change1(2);
    p2->change2(3);

    p3 = new Two(1, 4);
    p3->change2(8).change1(3);

    cout << a << endl;
    delete p1;
    delete p2;
    delete p3;
}