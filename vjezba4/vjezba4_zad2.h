#include <iostream>

using namespace std;

struct Point{

    double x;
    double y;

};

class Board{

    int visina;
    int sirina;
    char** ploca;

public:
    Board();
    Board(int a, int b);
    Board(const Board& P1);
    void display();
    ~Board();
    void draw_char(Point& p,char ch);
    void draw_up_line(Point& p,char ch);
    void draw_line(Point& p1, Point& p2, char ch);

};




