#include <iostream>
#include <string>
struct Donante {
 std::string nombres;
 std::string apellidoPat;
 std::string apellidoMat;
 std::string direccion;
 std::string correo;
 std::string telefono;
};
void registrar_donante(Donante &donante) {
 std::cout << "----- DONANTE ------"<<'\n';
 std::cout << "Nombres: ";
 std::getline(std::cin, donante.nombres);
 std::cout << "Apellido Paterno: ";
 std::getline(std::cin, donante.apellidoPat);
std::cout << "Apellido Materno: ";
 std::getline(std::cin, donante.apellidoMat);
 std::cout << "Telefono: ";
 std::getline(std::cin, donante.telefono);
 std::cout << "Correo: ";
 std::getline(std::cin, donante.correo);
 std::cout << "Direccion: ";
 std::getline(std::cin, donante.direccion);
}
void mostrar_donante(const Donante &donante) {
 std::cout <<'\n'<< "---- Datos del Donante registrado ----"<<'\n';
 std::cout << "Nombres: " << donante.nombres << '\n';
 std::cout << "Apellido paterno: " << donante.apellidoPat << '\n';
 std::cout << "Apellido paterno: " << donante.apellidoMat << '\n';
 std::cout << "Correo: " << donante.correo << '\n';
 std::cout << "Telefono: " << donante.telefono << '\n';
 std::cout << "Direccion: " << donante.direccion<< '\n'; 
}
int main() {
 Donante donante;
 registrar_donante(donante);
 mostrar_donante(donante);
 std::cout << "\nRegistro completado.\n";
 return 0;
}
