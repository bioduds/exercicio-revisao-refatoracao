#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public :
    std::string nome;
	int projetos;
	
};

#endif