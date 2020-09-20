
#include "Simulation.h"

#include <cstring>

using namespace std;


int main(int argc, char **argv) {
    int nc=0;
    int st=0;
    int as=0;
    for (int i = 0; i < argc; ++i)
    {
        if(std::strcmp(argv[i],"-nc") == 0)
        {
            if(argc != i+1)
            {
                nc = std::stoi(argv[i+1]);
                if(nc<1)
                {
                    cout << "Entrée non valide : veuillez entrer un nombre de caissiers suppérieur à 0\n";
                    return 1;
                }
            }
            else {
                cout << "Entrée non valide : veuillez renseigner le nombre de caissiers\n";
                return 1;
            }
        }
        else if(std::strcmp(argv[i],"-st") == 0)
        {
            if(argc != i+1)
            {
                st = std::stoi(argv[i+1]);
                if(st<1)
                {
                    cout << "Entrée non valide : veuillez entrer un temps de simulation suppérieur à 0\n";
                    return 1;
                }
            }
            else {
                cout << "Entrée non valide : veuillez renseigner un temps de simulation valide\n";
                return 1;
            }
        }
        else if(std::strcmp(argv[i],"-as") == 0)
        {
            if(argc != i+1)
            {
                as = std::stoi(argv[i+1]);
                if(as<1)
                {
                    cout << "Entrée non valide : veuillez entrer un temps de service moyen par caissier suppérieur à 0\n";
                    return 1;
                }
            }
            else {
                cout << "Entrée non valide : veuillez renseigner un temps de service moyen par caissier valide\n";
                return 1;
            }
        }
    }

    if(nc==0 || st==0 || as==0)
    {
        cout << "Entrée non valide : veuillez renseigner tous les paramètres requis\n";
        return 1;
    }


    Simulation simulation(st,nc,as);
    simulation.simulate();

}

