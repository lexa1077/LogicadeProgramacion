/**
 * @author Alexander Lopez LA17014
 * @brief Corto 1 Ejercicio 2
 * @date 07/03/2024
*/
#include <iostream>


/*Ejercicio N2: Utilizando el programa Visual estudio Code, C++, realiza un programa, que
permita rellenar un arreglo con los primeros veinte números, y luego permita mostrarlos
en orden ascendente y descendente.
*/


//================================DECLARACION DE FUNCIONES==============================================================
/**
 * @brief la funcion toma el arreglo de 20 posiciones y lo rrecorre con el ciclo while
 * luego va imprimiendo segun el valor actual de las variables banderas
*/
void rrecorrido(int arreglo[20]){
    int bandera = 19;//Bandera reversa
    int bandera2 = 0;//Bandera 
    
    while(bandera>=0 && bandera2<20){
        std::cout<<arreglo[bandera2]<<"\t"<<arreglo[bandera]<<std::endl;
        bandera--;
        bandera2++;
    }//final del bucle
 
}//final de la funcion
//=============================FIN DECLARACION DE FUNCIONES================================================





//=====================================INICIO DEL PROGRAMA=========================================================
int main(){
int numeros[20] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 std::cout<<"Orden Asc...: Orden Desc..."<<std::endl;
    rrecorrido(numeros);


return 0;
}//Final del programa
//========================================FIN DEL PROGRAMA======================================================

