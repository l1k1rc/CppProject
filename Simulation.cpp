//
// Created by l1k1 on 11/09/2020.
//
#include "Simulation.h"

Simulation::Simulation() {}

Simulation::Simulation(int simulationT, int cashierT) {
    this->simulationTime = simulationT;
    this->cashierCount = cashierT;
    srand((unsigned int) time(NULL));
}
void Simulation::simulate() { /*
    Bank bank;
    Queue queue = bank.getQueue();
    for(int actualTime = 0; actualTime<simulationTime; actualTime++){
        std::cout << "################ Tour n°" << actualTime << " ################"<<std::endl;
        // Arrivée des clients tous les 5 tours
        if (actualTime % 5 == 1){
            queue.add(Client(actualTime));
            std::cout << "Long : " << queue.getQueueSize() << std::endl;
        }
        // Si la queue n'est pas vide et si un caissier est disponible -> on prend ce caissier et on sert le client
        if(!queue.isEmpty() && bank.isACashierFree()){
            bank.getFreeCashier().servir(queue.remove(), rand()%10+1);
            std::cout << "Traitement du client : "<< std::endl;
            if (!bank.isACashierFree())
                std::cout << "Pas de caissier dispo" << std::endl;
        }

    }
    std::cout << bank.getQueue().isEmpty() << std::endl;*/
}
// Allow to upgrade the work of each cashier free. remainingServiceTime-- for each time.
void Simulation::updateServices() {
    Cashier cashiers[4];

}
double Simulation::tempsMoyenArrivees() {}

double Simulation::dureePrevue() {}