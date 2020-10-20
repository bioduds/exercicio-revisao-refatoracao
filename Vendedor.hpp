#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public :

    Vendedor( std::string _nome, 
              double _salarioHora, 
              double _horasTrabalhadas, 
              double _quotaMensalVendas ) : Empregado( _nome, 
                                                       _salarioHora, 
                                                       _horasTrabalhadas ), quotaMensalVendas( _quotaMensalVendas ) {
        
        quotaMensalVendas = _quotaMensalVendas;
        relatorioVendas();
        
    }

	double quotaTotalAnual();
    void relatorioVendas();
	
  private :

    double quotaMensalVendas;

};

#endif
