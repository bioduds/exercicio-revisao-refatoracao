#include <iostream>
#include <string>
#include "Vendedor.hpp"

double Vendedor::quotaTotalAnual() {
    return quotaMensalVendas * 12;
}

void Vendedor::relatorioVendas() {
    std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
}