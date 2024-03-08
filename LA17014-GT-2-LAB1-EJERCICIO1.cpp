/**
 * @author Alexander Lopez
 * @brief Laboratorio 1
 * @date 07/03/2024
*/
#include <iostream>
#include<functional>
//==============================================================================================
/*Ejercicio N1: Utilizando el programa Visual estudio Code, C++, realiza un programa, donde
deberá hacer uso de las funciones y obtener dos números enteros ingresados por el
usuario mediante el teclado, luego deberá calcular las 4 operaciones básicas e imprimir
el resultado (Vale 50%).
*/


//================================DECLARACION DE FUNCIONES==============================================================
//Funcion suma
int suma(int a, int b){
    return a+b;
}

//Funcion resta
int resta(int a, int b){
    return a-b;
}
//Funcion producto
int producto(int a, int b){
    return a*b;
}

//Funcion division
int division(int a, int b){
    //validamos la division a cero
    if(b==0){
        std::cout<<"La division entre cero no existe SE ASIGNA CERO A LA OPERACION"<<std::endl;   
        return 0;
    }
    else{
    return a/b;
    }

//==============================================================================================
    
    
    
    
}

/**
 * @brief funcion_general
 * Esta funcion llama a las funciones para realizar los calculos arimeticos
 * @param numero1 El primer operando de la operación.
 * @param numero2 El segundo operando de la operación.
 * @param operacion El tipo de operación a realizar.Sirve para obtener el indice de una lista con los nombres de las operaciones
 * @param funcion_paramerto Es la funcion que se llama la cual hace la operacion
 * @return No hay retorno solo impresion de resultados
 */
void funcion_general(int numero1, int numero2,
int operacion,std::function<int(int a, int b)>funcion_parametro){
    const char palabras[4][15] = {"suma", "resta","Multiplicacion","division"};
    const char signos[4][4] {" + "," - "," X "," / "};
    //asignamos el retorno de la funcion para imprimir el resultado de la operacion
    int resultado = funcion_parametro(numero1,numero2); 
    std::cout<<"La "<<palabras[operacion]<<" de "<<numero1<<signos[operacion]<<numero2<<" es: "<<resultado<<std::endl;    
}//final de la funcion general
//==============================================================================================






//=====================================INICIO DEL PROGRAMA=========================================================
int main(){
int numero1, numero2;//almacenan los enteros

std::cout<<"Hola bienvenido\n A continuacion ingrese los numeros a operar \a"<<std::endl;
//Lectura de los numeros
std::cin>>numero1;
std::cin>>numero2;


//llamamos a la funciones
funcion_general(numero1,numero2,0,suma);
funcion_general(numero1,numero2,1,resta);
funcion_general(numero1,numero2,2,producto);
funcion_general(numero1,numero2,3,division);

//========================================FIN DEL PROGRAMA======================================================











return 0;
}

