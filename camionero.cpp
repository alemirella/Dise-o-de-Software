#include <iostream>
#include <string>
struct Camionero {
 std::string dni;
 std::string nombres;
 std::string apellidoPat;
 std::string apellidoMat;
 std::string numlicencia;
 std::string correo;
 std::string telefono;
};
void registrar_camionero(Camionero &camionero) {
 std::cout << "----- CAMIONERO ------"<<'\n';
 std::cout << "DNI: ";
 std::getline(std::cin, camionero.dni);
 std::cout << "Nombres: ";
 std::getline(std::cin, camionero.nombres);
 std::cout << "Apellido Paterno: ";
 std::getline(std::cin, camionero.apellidoPat);
std::cout << "Apellido Materno: ";
 std::getline(std::cin, camionero.apellidoMat);
 std::cout << "Telefono: ";
 std::getline(std::cin, camionero.telefono);
 std::cout << "Correo: ";
 std::getline(std::cin, camionero.correo);
 std::cout << "Numero de licencia: ";
 std::getline(std::cin, camionero.numlicencia);
}
void mostrar_camionero(Camionero &camionero) {
 std::cout <<'\n'<< "---- Datos del Camionero registrado ----"<<'\n';
 std::cout << "DNI: " << camionero.dni << '\n';
 std::cout << "Nombres: " << camionero.nombres << '\n';
 std::cout << "Apellido paterno: " << camionero.apellidoPat << '\n';
 std::cout << "Apellido paterno: " << camionero.apellidoMat << '\n';
 std::cout << "Correo: " << camionero.correo << '\n';
 std::cout << "Telefono: " << camionero.telefono << '\n';
 std::cout << "Numero de licencia: " << camionero.numlicencia<< '\n'; 
}
int main() {
 Camionero camionero;
 registrar_camionero(camionero);
 mostrar_camionero(camionero);
 std::cout << "\nRegistro completado.\n";
 return 0;
}
