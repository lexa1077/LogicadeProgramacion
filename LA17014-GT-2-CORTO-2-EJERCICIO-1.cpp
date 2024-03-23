#include <iostream>
 #include <string>


/**
 * @author :Alexander Rigoberto Lopez Alfaro LA17014 GT 2
 * @version 0.01
*/
// Ejercicio N1: Utilizando el programa Visual estudio Code, C++, Realice un programa utilizando 
// arreglos como parámetros a una función, el cual haga el proceso de leer en un array, el sexo 
// de los estudiantes del curso lógica de programación y que determine cuantos hombres y 
// cuantas mujeres se encuentran en el grupo, suponiendo que los datos son extraídos alumno 
// por alumno (Vale 50%). 
// Considere la salida:

//==============================================================================



/**
 * esta funcion realiza la lectura de los valores ingresados
 * @name lectura
 * @param incremento Esta variable funciona para asignarles un numero a cada alumno y hacer poder diferenciar las lecturas
 * @return regresa un caracter producto del ingreso por el usuario
 * @bug si se ingresa un valor no correspondiente a un caracter el programa se buggea y no da los resultados esperados
*/
char lectura(int incremento){
    char caracter;
    std::cout<<"Ingrese el sexo del alumno # "<<incremento+1<<" \n (H)Hombre (M)Mujer"<<std::endl;
    std::cin>>caracter;
    return caracter;
}




/**
 * Esta funcion imprime los resultados luego de las lecturas
 * @name resultados
 * @param arreglo es un array de caracteres 
 * @param tamanio_arreglo es una variable que utiliza el ciclo for para realizar el rrecorrido atravez del arreglo
 * @bug ya que los valores vienen desde la funcion lectura, lanza resultados que no son los correctos
 * @return no retorna valores
 * 
*/
void resultados(char arreglo[],int tamanio_Arreglo){
int contador_H =0,contador_M=0;//Contador hombres y contador mujeres
for(int i = 0 ;i<tamanio_Arreglo;i++){
    
    if(arreglo[i]=='M'||arreglo[i]=='m'){
        contador_M++;
    }//final de la condicion
    if(arreglo[i]=='H'||arreglo[i]=='h'){
        contador_H++;
    }//final de la condicion

}//final del ciclo de rrecorrido
 



 std::cout<<"Cantidad de Mujeres "<<contador_M<<std::endl;
 std::cout<<"Cantidad de Hombres "<<contador_H<<std::endl;
 std::cout<<"En el grupo hay  "<<contador_H<<" hombres Y "<<contador_M<<" mujeres"<<std::endl;

}//FInal del ciclo resultados







int main(){

//=================DECLARACION DE VARIABLES=============================================================

int posiciones = 0;//Guarda un numero de posiciones para el arreglo
int tamanio_Arreglo = 0;//almacena el tamaño del arreglo

//==============================================================================

std::cout<<"EJERCICIO 1"<<std::endl;




//Realizamos la lectura de la cantida de los alumnos en el curso
std::cout<<"PORFAVOR INGRESE LA CANTIDAD DE ALUMNOS"<<std::endl;
std::cin>>tamanio_Arreglo;
char sexo [tamanio_Arreglo];//Arreglo que almacena las entradas de datos osea el resultado de la lectura para los alumnos


//Este bucle realiza la cantidad de lecturas. Depende de la cantidad de alumnos ingresado en la variable tamaño arreglo
while(posiciones<tamanio_Arreglo){
    //std::cout<<tamanio_Arreglo<<std::endl;


    //Llenamos el arreglo
    sexo[posiciones] = lectura(posiciones);//asignamos el return de la funcion lectura al arreglo 
    posiciones+=1;//Incrementamos la longitud
}//fin del ciclo 







//=========================FIN DEL PROGRAMA=====================================================
//imprimimos resultados
resultados(sexo,tamanio_Arreglo);






}//Final del metodo main