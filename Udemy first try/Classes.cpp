#include <iostream>
using namespace std;

class Cookie{
    private: 
    string color; //atributo color, son privado
    

    public:
    Cookie(string papa){ //constructor con el mismo nombre de la clase. Puedes ponerle papa o cualquier otra palabra a la string 
    //dentro del parentesis
        this->color=papa;
    }

    string getColor(){ //otras funciones
        return color;
    }

    void setColor (string color){
        this->color=color; //se refiere a la instancia
    }
    
};

int main(){
    Cookie* cookieOne=new Cookie("green"); //new corre el constructor
    cookieOne->setColor("yellow");

    cout << "C1: " << cookieOne ->getColor()<<endl;
}