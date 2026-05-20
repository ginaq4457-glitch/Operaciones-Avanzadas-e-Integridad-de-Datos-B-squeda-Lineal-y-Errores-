#include <iostream>
using namespace std;

int main() {
    // Arreglo de 6 enteros inicializado con valores definidos
    int numeros[6] = {10, 25, 33, 47, 52, 68};
    int tamano = 6; // Variable que almacena el tamanio del arreglo

    cout << "=== Elementos del Arreglo (sin Buffer Overflow) ===" << endl;

    // Ciclo con limite correcto: i < tamano (i va de 0 a 5)
    // IMPORTANTE: Si se usara i <= tamano (i <= 6), el ciclo intentaria
    // acceder a numeros[6], que esta FUERA del arreglo. Esto causa
    // comportamiento indefinido: lectura de memoria no asignada,
    // valores incorrectos o segmentation fault (buffer overflow).
    for (int i = 0; i < tamano; i++) {
        cout << "Posicion [" << i << "]: " << numeros[i] << endl;
    }

    return 0;
}
