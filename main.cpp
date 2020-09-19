#include <iostream>
#include <vector>
#include "Bank.h"
#include "Client.h"
#include <list>
#include "Queue.h"
#include "Cashier.h"
#include "Simulation.h"

using namespace std;


#include <stdio.h>
#include <math.h>

long fact(int i)
{
    long f;

    if (i==0)
    {
        return 1;
    }
    else
    {
        f = fact(i - 1);
        return i*f;
    }

}

int main ()
{
    int n, k;
    double e, p, q, r, t, x, y, z;

    printf("entrez la valeur de k entier non nul positif\n");
    scanf("%d", &k);
    printf("entrez le nombre d'essais n entier non nul positif\n");
    scanf("%d", &n);

    x = fact(n);
    y = fact(k);
    z = fact(n-k);

    r = x/(y*z);

    printf("la combinaison n de k est : %lf\n", r);

    x = n-1;
    y = k-1;
    z = x-y;
    x = fact(x);
    y = fact(y);
    z = fact(z);

    e = x/(y*z);
    e = e/x;
    p = pow(e, k);

    printf("la probabilite de succes k de n est : %lf\n", p);

    x = n-k;
    y = 1-p;
    q = pow(y, x);

    r = r*p*q;
    printf("le resultat de la loi binomiale est : %lf\n", r);
    e = n*p;
    printf("l'esperance est de : %lf\n", e);
    t = sqrt(e*q);
    printf("l'ecart type est de : %lf\n", t);

    x = exp(-e);
    y = pow (e,k);
    z = x*y;
    k = fact(k);
    x = z/k;
    printf("la loi de poisson est : %g\n", x);
}
//
// Created by l1k1 on 11/09/2020.
//
/*int main() {
    std::list<Client> nbClient;
    std::list<std::string> test = {"blue", "red", "green"};
    nbClient.push_front(Client("Jean"));
    nbClient.push_front(Client("Patrick"));
    nbClient.push_back(Client("JeanJean"));
    nbClient.push_front(Client("rastouf"));

    for (std::list<Client>::iterator it = nbClient.begin(); it != nbClient.end(); ++it) {
        Client item = *it;
        std::cout << item.getName() << endl;
    }

    // Find 3rd element from list
    // Create iterator pointing to first element
    std::list<Client>::iterator it = nbClient.begin();
    // Advance the iterator by 2 positions,
    std::advance(it, 1);
    // Now iterator it points to 3rd element
    std::cout << "2nd element = " << (*it).getName() << std::endl;
    // Find 3rd element from list
    // It returns a new iterator pointing to n position after the
    // base iterator given as first argument
    auto it1 = std::next(nbClient.begin(), 2);
    std::cout << "2nd element = " << (*it1).getName() << std::endl;

    Queue queue;
    Client c1 = Client("Patrick");
    queue.add(c1);
    Client c2 = queue.remove();
    cout << c2.getName() << '\n';
    cout << queue.isEmpty();
    return 0;
}*/

