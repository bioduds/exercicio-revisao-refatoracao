#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:

    Empregado( std::string _nome, 
               double _salarioHora, 
               double _horasTrabalhadas ) {
        nome = _nome;
        salarioHora = _salarioHora;
        horasTrabalhadas = _horasTrabalhadas;
        relatorio();
    }
    
    std::string nome;
    double horasTrabalhadas;

    double pagamentoMes( double horasTrabalhadas );
    void relatorio();

  private:
    double salarioHora;

	
};

#endif
