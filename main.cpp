/*** Eduardo Capanema ***/
#include <iostream>
#include "Engenheiro.hpp"
#include "Vendedor.hpp"
/*** 2020041515 ***/

int main() {

  /****** ENGENHEIROS ******/
  int e = 3; // numero de engenheiros
  std::string nomesEngenheiros[e] = {"Joao Snow", "Daniela Targaryen", "Bruno Stark"};
  double salarioHoraEngenheiros[e] = {35, 30, 30};
  double horasTrabalhadasEngenheiros[e] = {9.5, 8, 8};
  int projetos[e] = {3, 1, 2};
  for( int i=0; i<e; i++ ) {
    Engenheiro *engenheiro = new Engenheiro( nomesEngenheiros[i], 
                                             salarioHoraEngenheiros[i], 
                                             horasTrabalhadasEngenheiros[i], 
                                             projetos[i] );
    std::cout << std::endl;
  }
  
  /****** VENDEDORES ******/
  int v = 3; // numero de vendedores
  std::string nomesVendedores[v] = {"Tonho Lannister", "Jose Mormont", "Sonia Stark"};
  double salarioHoraVendedores[v] = {20, 25, 30};
  double horasTrabalhadasVendedores[v] = {6, 8, 8};
  double quotaMensalVendas[v] = {5000, 3000, 4000};
  for( int j=0; j<v; j++ ) {
    Vendedor *vendedor = new Vendedor( nomesVendedores[j], 
                                       salarioHoraVendedores[j], 
                                       horasTrabalhadasVendedores[j], 
                                       quotaMensalVendas[j] );
    std::cout << std::endl;
  }
  
  return 0;

}