#include <iostream>
#include <vector>
#include "Bank.h"
#include "Client.h"
#include <list>

using namespace std;

Client get(list<Client> _list, int _i) {
    list<Client>::iterator it = _list.begin();
    for (int i = 0; i < _i; i++) {
        ++it;
    }
    return *it;
}

//
// Created by l1k1 on 11/09/2020.
//
int main() {
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

    /**** Finding nth element using std::advance() ******/
    // Find 3rd element from list
    // Create iterator pointing to first element
    std::list<Client>::iterator it = nbClient.begin();
    // Advance the iterator by 2 positions,
    std::advance(it, 1);
    // Now iterator it points to 3rd element
    std::cout << "2nd element = " << (*it).getName() << std::endl;
    /**** Finding nth element using std::next() ******/
    // Find 3rd element from list
    // It returns a new iterator pointing to n position after the
    // base iterator given as first argument
    auto it1 = std::next(nbClient.begin(), 2);
    std::cout << "2nd element = " << (*it1).getName() << std::endl;
    return 0;
}

