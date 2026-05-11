#include <iostream>
#include <string>
using namespace std;

//menyertakan file header jantung.h dan manusia.h
#include "jantung.h"
#includr "manusia.h"

int main()
{
    //deklarasi dan pemberian nilai object pointer varManusia
    Manusia* varManusia = new Manusia("Jono");
    //mendelete pointer varManusia dari memori
    delete varManusia;
    return 0;
}