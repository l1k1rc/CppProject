#include <iostream>
#include <vector>
#include "Bank.h"
#include "Client.h"
#include <list>
#include "Queue.h"
#include "Cashier.h"

using namespace std;



int main(){
    Bank b = Bank(4);
    Queue q =  Queue();
    Cashier c = Cashier();
    Client c1 = Client(2.09);
    Client c2 = Client(3.15);
    Client c3 = Client(4.98);
    Client c4 = Client(5.80);
    Client c5 = Client(7.80);
    q.add(c1);
    q.add(c2);
    q.add(c3);
    q.add(c4);
    q.add(c5);
    cout << q.getQueueSize() << endl;
    cout << c.estDispo() << endl;
    c.servir(c1);
    c.liberer();
    c.servir(c2);
    c.liberer();
    cout << c.estDispo() << endl;
    cout << "Temps moyen : " << c.tempsMoyenService() << endl;


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

