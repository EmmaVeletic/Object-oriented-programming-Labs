#include "vjezba4_zad2.h"
#include <cstring>
#include <cmath>
#include <iostream>

using namespace std;

Board::Board(){

    ploca = new char*[7];
    sirina=7;
    visina=7;
    for(int i=0;i<7;i++)
    {
        ploca[i]= new char[7];

        for(int j=0;j<7;j++){
            if (i==0 || i==7-1 || j==0 || j==7-1)
                ploca[i][j]='$';
            else
                ploca[i][j]=' ';
        }
    }


}

Board::Board(int a, int b){

    sirina=b;
    visina=a;
    ploca = new char*[visina];

    for(int i=0;i<visina;i++)
    {
        ploca[i]= new char[sirina];

        for(int j=0;j<sirina;j++){
            if (i==0 || i==visina-1 || j==0 || j==sirina-1)
                ploca[i][j]='$';
            else
                ploca[i][j]=' ';
        }
    }
}

Board::Board(const Board& P1)
{
    sirina=P1.sirina;
    visina=P1.visina;

    ploca=new char*[visina];

    for(int i=0;i<visina;i++){
            ploca[i]=new char[sirina];
        for (int j=0;j<sirina;j++){
            ploca[i][j]=P1.ploca[i][j];
        }
    }
}

Board::~Board()
{
    for(int i=0;i<visina;i++){
        delete[] ploca[i];
    }
    delete ploca;

}

void Board::display()
{
    for (int i = 0; i < visina; i++)
    {
        for (int j = 0; j < sirina; j++)
        {
          cout << ploca[i][j];
        }
        cout<<endl;
    }
}

void Board::draw_char(Point& p,char ch)
{

    if(p.x < sirina && p.y < visina){
   ploca[(int)p.y][(int)p.x]= ch;
    }
   //provjera je li tocka unutar granica ploce

}

void Board::draw_up_line(Point& p,char ch)
{
    for(int j=p.y;j>=1;j--){
        ploca[j][(int) p.x]=ch;
    }
}

void Board::draw_line(Point& p1, Point& p2, char ch){

    p1.x=round(p1.x);
    p1.y=round(p1.y);
    p2.x=round(p2.x);
    p2.y=round(p2.y);

    int x1 = min(p1.x, p2.x);
    int y1 = min(p1.y, p2.y);
    int x2 = max(p1.x, p2.x);
    int y2 = max(p1.y, p2.y);


    for(int i=y1; i <= y2;i++){

        for(int j=x1;j <= x2; j++){

            if(y1 == y2){

                ploca[y1][j] = ch;
            }
            else if (x1 == x2){

                ploca[i][x1] = ch;
            }
            else if(i == j){
                ploca[i][j] = ch;
            }
        }
    }


}

int main()
{
    Board P1(10,10);
    Board P2=P1; //poziva se copy
    Point tocka;
    tocka.x = 2.5; //Point je struktura pa moze pristupit member clanovima
    tocka.y = 2.5;
    P1.draw_char(tocka,'X');
    P1.display();
    P1.draw_up_line(tocka, 'o');
    P1.display();
    Point tocka2;
    tocka2.x = 3.5;
    tocka2.y = 5.0;
    P1.draw_line(tocka, tocka2, 'x');
    P1.display();

    return 0;
}
