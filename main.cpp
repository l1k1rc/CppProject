#include <iostream>
#include <vector>
#include "Bank.h"
#include "Client.h"
#include <list>
using namespace std;

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
}
