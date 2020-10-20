#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:

    Engenheiro( std::string _nome, 
                double _salarioHora, 
                double _horasTrabalhadas, 
                int _projetos ) : Empregado( _nome, 
                                             _salarioHora, 
                                             _horasTrabalhadas ), projetos( _projetos ) {

        projetos = _projetos;
        relatorioProjetos();
        
    }
    
	int projetos;
    void relatorioProjetos();
	
};

#endif
