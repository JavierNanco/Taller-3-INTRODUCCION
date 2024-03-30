#include <stdio.h>
int VentasRegistradas(int ventaregistrada, int precio)
{
      /* Esta es la primera y la mas corta funcion que utilizaremos,
         es un contador que nos informara posterior a terminar 
         de añadadir los datos cuantas ventas hemos registrado.
      */
      if(precio > 0)
            {
                  ventaregistrada=ventaregistrada + 1;      
            }
      
      return ventaregistrada;
}

int recontador(int recuento, int cantidad)
{
      
      /* esta funcion la utilizaremos para el divisor de la division de el
      promedio de precios entre aquellos productos cuya cantidad sea mayor de 10 */
      
      if(cantidad > 10)
            {
                  recuento=recuento + 1;
            }
      return recuento;
}

float sumatotal(float preciosumado, int precio, int cantidad)
{
      /*con esta funcion calcularemos el dividendo de el promedio 
      de precios entre aquellos productos cuya cantidad sea mayor de 10*/
      
      if(cantidad > 10)
            {
                  preciosumado=preciosumado + precio;
            }
      return preciosumado;
}

int PromedioDePreciosCuyaCantidadSeaMayorDe10(int preciosumado, int cantidad, int recuento)
{
      /*esta funcion es usada para calcular el promedio total de precios
      de productos cuyas cantidades sean mayores a 10*/
      
      int promediototal;
      
      if(cantidad > 10)
            {
                  promediototal = preciosumado/recuento;
            }
            
      return promediototal;      
}

int Cantidadmenor(int cantidad, int cantidadmenor, int precio)
{
      /*esta funcion la utilizo para calcular la cantidad menor
      entre productos con un precio entre 999 y 2599, para ello primero
      utilizo la sentencia if para posteriormente utilizarla nuevamente
      y asi poder diferenciar la cantidad menor de las mayores*/
      
      if(precio >= 999 && precio <= 2599)
            {
                  if(cantidad<cantidadmenor)
                        {
                              cantidadmenor=cantidad;
                        }
      }
      
      return cantidadmenor;
}

int codigo123(int codigo, int Codigo123)
{
      /*Aqui utilizo una sentencia if para separar a 
      los productos cuyo codigo sea 123 y un contador simple
      para saber cuantos productos con tal codigo hay.*/
      
      if(codigo == 123)
            {
                  Codigo123++;  
            }
      return Codigo123;
}

int PrecioMayorPares(int codigo, int precio, int PrecioMayorpares)
{
      /*Esta funcion utiliza una sentencia if, la cual permite entrar solo a
      numeros pares gracias a que los divide por 2 y posterior a eso utiliza el resto
      de la division el cual solamente puede ser 0. Seguido a esto se utiliza otra 
      sentencia if que compara solo a los precios mayores y luego los retorna.*/
      
      if(codigo % 2 == 0)
            {
                  if(precio > PrecioMayorpares)
                        {
                              PrecioMayorpares=precio;
                        }
            }
      return PrecioMayorpares;
}

int main()
{

int precio, TotalDeVentas, cantidad, totalprecio;
int cantidadmenor, codigo, Codigo123, PrecioMayor;
float Sumatotal, recuento, PromedioDePrecios;

Sumatotal=0;
Codigo123=0;
precio = 1;
recuento = 0;
TotalDeVentas=0;
PromedioDePrecios=0;
totalprecio=0;
cantidadmenor=999999999;
PrecioMayor=0;
cantidad=0;


/*Aqui utilizamos una sentencia while que nos permitira volver a ingresar
los datos del producto hasta que este tenga precio de un valor negativo o 0.*/

     while(precio > 0)
      {
           
           printf("\ningrese el precio del producto\n(si su valor es negativo o 0 se le redirigira al menu):");
           scanf("%d", & precio);  
            
            if(precio <= 0)
                  {
                        printf("se le redirigira al menu:");
                  }
            
            TotalDeVentas=VentasRegistradas(TotalDeVentas, precio); 
            
            if(precio > 0)
                  {
                           
                        
                        printf("\ningrese la cantidad de su producto:");
                        
                        scanf("%d", & cantidad);
                        
                        Sumatotal = sumatotal(Sumatotal, precio, cantidad);
                            
                        recuento = recontador(recuento, cantidad);
                        
                        cantidadmenor=Cantidadmenor(cantidad,cantidadmenor,precio);

                        printf("\ningrese el codigo de su producto:");
                        
                        scanf("%d", & codigo);
                        
                        Codigo123=codigo123(codigo, Codigo123);
                        
                        PrecioMayor=PrecioMayorPares(codigo,precio,PrecioMayor);
                        
                        
                  }
      }
      
      PromedioDePrecios=PromedioDePreciosCuyaCantidadSeaMayorDe10(Sumatotal,cantidad,recuento);
      
int opcion;
opcion=0;

/*El menu consta de un while que nos ayudara a volver las veces que queramos a esta
y que podamos finalizarla cuando queramos*/
      
      while(opcion != 6)
      {
            printf("\n\nmenu\n");
            
            printf("1. Cantidad de ventas registradas:\n");
            
            printf("2. Cantidad de productos cuyo código sea 123:\n");
            
            printf("3. Promedio de precios entre aquellos productos cuya cantidad sea mayor de 10:\n");
            
            printf("4. Precio mayor entre los códigos que sean pares:\n");
            
            printf("5. Cantidad menor de los productos cuyo precio varía entre 999 y 2599:\n");
            
            printf("6. salir");
            
            printf("\nelija una opcion:\n");
            
            /*Las distintas opciones nos redirigen al valor guardado con anterioridad 
            y posterior a eso redirigirnos al menu.*/
            
            scanf("%d", & opcion);
            if(opcion == 1)
                  {
                        printf("\n sus Ventas registradas son: %d", TotalDeVentas);
                  }
            if(opcion == 2)
                  {
                        printf("\nCantidad de productos cuyo código sea 123: %d", Codigo123);
                  }
            if(opcion == 3)
                  {
                        printf("\nPromedio de precios entre aquellos productos cuya cantidad sea mayor de 10: %f", PromedioDePrecios);
                  }
            if(opcion == 4)
                  {
                        printf("\nPrecio mayor entre los códigos que sean pares: %d", PrecioMayor);
                  }
            if(opcion == 5)
                  {
                        if(cantidadmenor != 999999999)
                              {
                                    printf("\nCantidad menor de los productos cuyo precio varía entre 999 y 2599: %d", cantidadmenor);
                              }
                        else
                              {
                                    printf("\nCantidad menor de los productos cuyo precio varía entre 999 y 2599: ninguno ");
                              }
                        
                  }
            if(opcion == 6)
                  {
                        printf("\nSalir");
                  }
            if(opcion != 1 && opcion != 2 && opcion != 3 && opcion !=4 && opcion !=5 && opcion != 6)
                  {
                  opcion=6;
            
                  /*Cualquier opcion que sea distinta a los valores de 1 a 6 terminara 
                  dando a entender al programa que es un 6, lo que finalizará el mismo.*/
                  }
      }    
    
    return 0;
    
}
