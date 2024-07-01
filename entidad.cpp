#include <iostream>
#include <string>
struct Entidad {
 std::string ruc;
 std::string razonsocial;
 std::string direccion;
 std::string distrito;
 std::string provincia;
 std::string correo;
};
void registrar_entidad(Entidad &entidad) {
 std::cout << "----- ENTIDAD ------"<<'\n';
 std::cout << "RUC: ";
 std::getline(std::cin, entidad.ruc);
 std::cout << "Razon Social: ";
 std::getline(std::cin, entidad.razonsocial);
 std::cout << "Direccion: ";
 std::getline(std::cin, entidad.direccion);
std::cout << "Distrito: ";
 std::getline(std::cin, entidad.distrito);
 std::cout << "Provincia: ";
 std::getline(std::cin, entidad.provincia);
 std::cout << "Correo: ";
 std::getline(std::cin, entidad.correo);
}
void mostrar_entidad(Entidad &entidad) {
 std::cout <<'\n'<< "---- Datos de la Entidad registrada ----"<<'\n';
 std::cout << "RUC: " << entidad.ruc<< '\n';
 std::cout << "Razon social: " << entidad.razonsocial<< '\n';
 std::cout << "Direccion: " << entidad.direccion<< '\n';
 std::cout << "Distrito: " << entidad.distrito << '\n';
 std::cout << "Provincia: " << entidad.provincia << '\n';
 std::cout << "Correo: " << entidad.correo<< '\n'; 
}
int main() {
 Entidad entidad;
 registrar_entidad(entidad);
 mostrar_entidad(entidad);
 std::cout << "\nRegistro completado.\n";
 return 0;
}
