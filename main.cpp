#include <iostream>
#include <vector>
#include "Bank.h"
#include "Client.h"
#include <list>
#include "Queue.h"
using namespace std;



int main(){
    Queue q;
    Client c = Client(2.01);
    cout << c.getArrivaltime() << endl;
    q.add(c);
    cout << q.isEmpty() << endl;
    cout << q.getQueueSize() << endl;

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

