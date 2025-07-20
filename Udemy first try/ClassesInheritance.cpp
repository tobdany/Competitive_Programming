#include <iostream>
using namespace std;

class Vehiculo{
    private:
    string Marca;

    public:
    Vehiculo(){
        this->Marca="Nissan";
    }

    string marcaVehiculo(){
        return Marca;
    }

     
};

class Carro:public Vehiculo{
    public:
    string model="March";
};

int main(){
    Vehiculo MiVehiculo;
    Carro Carro;
    cout << MiVehiculo.marcaVehiculo() << " " << Carro.model << endl;

    return 0;
}