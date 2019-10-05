/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Itinerario.cpp
 * Author: Miguerubsk
 * 
 * Created on 5 de octubre de 2019, 11:33
 */

#include "Itinerario.h"

Itinerario::Itinerario() {
    this->minutos = rand() % 101;

}

Itinerario::Itinerario(const Itinerario& orig) {
    this->fecha = orig.fecha;
    this->inicio = orig.inicio;
    this->fin = orig.fin;
    this->minutos = orig.minutos;
    this->id = orig.id;
}

Itinerario::~Itinerario() {
}

