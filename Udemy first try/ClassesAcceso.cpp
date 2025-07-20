#include <iostream>
using namespace std;

class MyClass{
    public:
        int myNum;
        string myString;
        string brand;
        string model;
        int year;

        MyClass(string x, string y, int z){
            cout <<"Esto es un constructor, no tienen variable de retorno" << endl;
            brand = x;
            model =y;
            year=z;
        }

        void myMethod(){
            cout << "Hello World" << endl;
        }
};


int main(){
    /*MyClass myObj;
    //acceder a atributos y establecer valores

    myObj.myNum=16;
    myObj.myString="Hola mundo";

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    myObj.myMethod();
    */

    MyClass Carro("BMW","X5",1999);
    cout << Carro.brand << " " << Carro.model << " " << Carro.year;

    return 0;
}