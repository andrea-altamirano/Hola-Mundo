    #include<iostream>
    #include<Mascota.hpp>
    using namespace std;

int main(int argc, char const *argv[])
{
    Mascota m1;
    Mascota m2;

    Alimento a1(5);
    Alimento a2(2);

    m1.Comer();
    m2.Comer();
    cout<<"Mascota 1 Energía: "<<m1.LeerEnergia()<<endl;
    cout<<"Mascota 2 Energía: "<<m2.LeerEnergia()<<endl;
    return 0;
}
