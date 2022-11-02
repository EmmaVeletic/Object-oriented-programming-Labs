#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class Book
{
    protected:
        string autor;
        string naslov;
        string godina_izdanja;

    public:
        Book(string autor, string naslov, string godina_izdanja);
        string get_autor();
        string get_naslov();
        string get_godina();
        void set_autor(string autor);
        void set_godina(string godina_izdanja);
        void set_naslov(string naslov);

        virtual int vrati_megabajte() = 0;

};

#endif
