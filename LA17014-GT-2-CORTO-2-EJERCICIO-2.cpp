#include <iostream>



/**
 * @author :Alexander Rigoberto Lopez Alfaro LA17014 GT 2
 * @version 0.01
 */

// Ejercicio N2: Utilizando el programa Visual estudio Code, C++, realiza un programa, donde se
// cree una unión que permita almacenar, tanto grados Celsius como grados Fahrenheit. Escribe 
// una función para convertir de Celsius a Fahrenheit y otra para convertir de Fahrenheit a 
// Celsius.(Vale 50%). Considere la salida:
//==============================================================================


// Definición de la unión que almacena tanto grados Celsius como grados Fahrenheit
union Temperatura {
    float celsius;
    float fahrenheit;
};

// Función para convertir de Celsius a Fahrenheit

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Función para convertir de Fahrenheit a Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    // Crear una variable de tipo Temperatura
    Temperatura temp;

    // Leer la temperatura en grados Celsius
    std::cout << "Ingrese la temperatura en grados Celsius: ";
    std::cin >> temp.celsius;

    // Convertir de Celsius a Fahrenheit e imprimir el resultado
    std::cout << "La temperatura en grados Fahrenheit es: " << celsiusToFahrenheit(temp.celsius) << std::endl;

    // Leer la temperatura en grados Fahrenheit
    std::cout << "Ingrese la temperatura en grados Fahrenheit: ";
    std::cin >> temp.fahrenheit;

    // Convertir de Fahrenheit a Celsius e imprimir el resultado
    std::cout << "La temperatura en grados Celsius es: " << fahrenheitToCelsius(temp.fahrenheit) << std::endl;

    return 0;
}
