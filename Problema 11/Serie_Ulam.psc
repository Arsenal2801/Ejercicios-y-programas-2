Algoritmo Serie_Ulam
    Definir n como Entero;
    Escribir Sin Saltar "SERIE ULAM - INGRESE NÚMERO : ";
    Leer n;
    Mientras (n <> 1) Hacer
        Escribir Sin Saltar n, " ";
        Si (n mod 2)==0 Entonces
            n <- n/2;
        SiNo
            n <-3*n+1;
        FinSi
    FinMientras
    Escribir "";
FinAlgoritmo