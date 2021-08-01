#include <iostream>
#include <cstdlib>
using namespace std;
                                   //TAREA DE VECTORES-FUNCIONES

//Declarar un vector enteros
int k [5];
const int MAX=6;
//Vectores de numeros reales incicializados en la declaracion
double num[6] = {15.8, 10.789, 100.589, 11.1, 8.001, 78.99};
//Declarar un vector de reales de simple precision (flotantes)
//y lo leeremos por teclado
float vector[MAX];


//lectura del vector
void leer_vector(int num[], int tamanio)
{
    //los vectores siempre se pasan por referencia
    for(int i=0; i<tamanio; i++)
    {
        cout<<"Ingrese el elemento # "<<(i+1)<<": ";
        cin>>num[i];
    }
}

//impresion del vector
void imprime_vector(int vector[], int tamanio)
{
    cout<<endl<<endl<<"ELEMENTOS DEL VECTOR";
    for(int i=0; i<tamanio; i++)
    {
        cout<<endl<<"Elemento # "<<(i+1) <<" : "<<vector[i];
    }
}
//Realizar la sumatoria de los elementos del vector
double sumatoria_vector(int vector[], int tamanio)
{
    double suma=0;
    for(int i=0; i<tamanio; i++){
        suma+=vector[i];
    }

    return suma;
}
//Realizar el promedio de los elementos del vector
double promedio_vector(int vector[], int tamanio)
{
    double prom=0;
    prom= sumatoria_vector(vector, tamanio)/tamanio;
    return prom;

}
//Ejercicios
//1)Funcion que devuelva  el elemento maximo del vector
int elementomaximo_vector(int vector[], int tamanio)
{
    int maxi= vector [0];
    for(int i=1; i< tamanio; i++)
    {
        if(maxi< vector[i]){
            maxi=vector[i];
            }
    }
   return maxi;
}
//2)Funcion que devuelve el elemento minimo del vector
int elementominimo_vector(int vector[], int tamanio)
{
    int mini= vector [0];
    for(int i=1; i<tamanio; i++)
    {
        if(mini>vector[i]){
            mini=vector[i];
        }
    }
    return mini;
}
//3)Funcion que devuelva por referencia el elemento minimo y maximo del vector
int vector_minimo (int vector[], int tamanio)

{
    int mini= vector[0];
    for(int i=1; i< tamanio; i++)
    {
        if(mini> vector[i]){
            mini=vector[i];
        }
    }
    return mini;
}
int vector_maximo(int num[], int tamanio)

{
    int maxi= num[0];
    for(int i=1; i< tamanio; i++)
    {
        if(maxi< num[i]){
            maxi=num[i];
        }
    }
    return maxi;
}

//4)Funcion que llene el vector con valores aleatorios
int rellenar_vector (int vector[],int tamanio){
    int i,nume=0;
    for (i=0; i<tamanio; i++){
        nume=nume + rand() % 15;
        vector[i]=nume;
    }
}
int imprimir (int num[],int tamanio){
    int i;
    for (i=0;i <tamanio;i++)
        if (i<tamanio-1)
            cout<<num[i]<<endl;
        else
            cout<<num[i];
}
int main() {

    const int MAX=7;
     int num[MAX];
    const int MIN=7;
int vector[10];
int tamanio=10;
    // llamada a la funcion para leer el vector
    leer_vector(num, MAX);
    imprime_vector(num,MAX);

    int suma= sumatoria_vector(num,MAX);

    cout<<endl<<"LA SUMATORIA DEL VECTOR ES: "<<suma;
    //cout<<endl<<num[6];
    int promedio= promedio_vector(num,MAX);

    cout<<endl<<"EL PROMEDIO  ES: "<<promedio_vector(num,MAX);

    cout<<endl<<"EL valor maximo es: "<<elementomaximo_vector(num,MAX);
    cout<<endl<<"EL valor minimo es: "<<elementominimo_vector(num,MIN);
    cout<< "\nEl valor Minimo y Maximo es:"<<vector_minimo(num, MIN)<<" ES MINIMO" <<" y "<<vector_maximo(num, MAX)<<" ES MAXIMO ";
    cout<<endl<<"Numeros aleatorios "<<endl;
    rellenar_vector(vector,tamanio);
    imprimir(vector,tamanio);

    cout<<endl<<"Vectores";
    //inicializar el vector (elemento x elemento)
    k[0]=10;   k[1]=15;   k[2]=1;  k[3]=11;  k[4]=100;
    cout<<endl<<"El valor de la posicion 4: "<<k[4];
    cout<<endl<<"El valor de la posicion 3: "<<k[4/2 + 1];
    cout<<endl<<"El valor de la posicion 2: "<<num[2];
    num[0]=9.99;
    cout<<endl;
    for(int i=0; i<MAX; i++)
    {
        cout<<endl<<"INGRESE EL ELEMENTO # "<<(i+1)<< " : " ;
        cin>> vector[i];
    }
    //IMPRIMIR EL VECTOR INGRESADO
    cout<<endl<<endl<<"Elementos del vector: ";
    for(int i=0; i<MAX; i++)
    {
        cout<<endl<<vector[i];
    }

    return 0;
}
