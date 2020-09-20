
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
                    cout << "Entry false : enter a number of cashier above 0\n";
                    return 1;
                }
            }
            else {
                cout << "Entry false : enter a number of cashier \n";
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
                    cout << "Entry false : enter a time simulation number above 0\n";
                    return 1;
                }
            }
            else {
                cout << "Entry false : enter a valide time simulation\n";
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
                    cout << "Entry false : enter an average service time per cashier above 0\n";
                    return 1;
                }
            }
            else {
                cout << "Entry false : enter an average service time per cashier available\n";
                return 1;
            }
        }
    }

    if(nc==0 || st==0 || as==0)
    {
        cout << "Entry false : please enter all the parameters required (-nc : the number of cashiers, -st : the simulation time, -as : the average service time per cashier for one client\n";
        return 1;
    }


    Simulation simulation(st,nc,as);
    simulation.simulate();

}

