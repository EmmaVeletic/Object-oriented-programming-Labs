#include "vjezba8.h"


Money Money::operator+(Money const &obj){
    Money rez;
    rez.kune = this->kune + obj.kune;
    rez.lipe = this->lipe + obj.lipe;
    return rez;
}

Money Money::operator-(Money const &obj){
    Money rez;
    rez.kune = this->kune - obj.kune;
    rez.lipe = this->lipe - obj.lipe;
    return rez;

}

Money Money::operator+=(Money const &obj)
{
    this->kune += obj.kune;
    this->lipe += obj.lipe;
    this->increse_kn();
    return *this;

}

Money Money::operator-=(Money const &obj)
{
    this->kune -= obj.kune;
    this->lipe -= obj.lipe;
    this->reduce_kn();
    return *this;
}

ostream& operator<<(ostream& os, Money const &racun)
{
	os << racun.kune<< " kuna, " << racun.lipe << " lipa"<< endl;
	return os;
}

Money Money::increse_kn(){

    if(lipe >= 100){
        kune += 1;
        lipe-=100;
    }
}

Money Money::reduce_kn(){

    if(lipe < 0 ){
        kune -= 1;
        lipe = 100-lipe;
    }
}

int main()
{
    Money juha(11,30), becki(15,50), salata(10), pivo(15), babic(16,40);
    Money racun;
    racun = juha + becki + salata + pivo;
    racun -= pivo;
    racun += babic;
    cout << racun;
    //racun.print();


    Razlomak r(2, 6);
    double val = r;
    cout << val << endl;
    cout << "velicina u bajtovima: " << sizeof(val);

}
