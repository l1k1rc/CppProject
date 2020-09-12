#include <iostream>
#include <vector>
#include "Bank.h"
#include "Client.h"
#include <list>
using namespace std;
Client get(list<Client> _list, int _i){
    list<Client>::iterator it = _list.begin();
    for(int i=0; i<_i; i++){
        ++it;
    }
    return *it;
}
//
// Created by l1k1 on 11/09/2020.
//
int main(){
    std::list<Client> nbClient;
    std::list<std::string> test = { "blue", "red", "green" };
    nbClient.push_front(Client("Jean"));
    nbClient.push_front(Client("Patrick"));
    for(std::list<Client>::iterator it = nbClient.begin(); it!= nbClient.end(); ++it)
    {
        Client item = *it;
        std::cout << item.getName() << endl;
    }


    std::list<Client> l;
// add elements to list 'l'...

    unsigned N = 1;
    std::list<Client>::iterator it = l.begin();
    std::advance(it, N); // déplace le pointeur sur l'élément n
    cout << (*it).getName();

}

