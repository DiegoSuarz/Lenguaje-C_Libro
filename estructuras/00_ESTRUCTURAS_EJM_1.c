    #include <stdio.h>

    
    void datosClientes (int i);
    void VisualizarDatos( int i);
    struct fecha
    {
        int mes;
        int dia;
        int year;
    };
    
    struct cuenta
    {
        char nombre[80];
        char calle[80];
        char ciudad[80];
        float monto;
        struct fecha nacimiento;
        struct fecha pago;
    }Jefe, cliente[100];


    int main()
    {

        int i,N;
        printf("\nSistema de Pagos\n");
        printf("ingrese nombre del Jefe de area: \n");
        scanf("%[^\n]",Jefe.nombre);
        printf("\nEl Jefe es: %s\n",Jefe.nombre);

        printf("\nIngrese la fecha de nacimiento de jefe\n");
        printf("\nIngrese el mes:\n");
        scanf("%d",&Jefe.nacimiento.mes);
        printf("\nIngrese el dia:\n");
        scanf("%d",&Jefe.nacimiento.dia);
        printf("\nIngrese el year:\n");
        scanf("%d",&Jefe.nacimiento.year);
        printf("\nLa fecha de necimiento es: %d/%d/%d\n",Jefe.nacimiento.dia,Jefe.nacimiento.mes,Jefe.nacimiento.year);
        
        printf("\n\nIngrese el domicilio de jefe\n");
        printf("\nIngrese el calle:\n");
        scanf(" %[^\n]", Jefe.calle);
        printf("\nIngrese el ciudad:\n");
        scanf(" %[^\n]", Jefe.ciudad);
        printf("\nLa direccion de domicilio es: calle: %s ciudad: %s\n",Jefe.calle,Jefe.ciudad);


        printf("\nSistema de Pagos para Clientes\n");
        printf("\n\nIngrese la cantidad de clientes\n");
        scanf("%d",&N);
        printf("\n\nIngrese los datos de los clientes\n");
        for(i=0; i < N; ++i){
            datosClientes(i);
        }

        printf("\n\nImprimir datos de los clientes:\n");
        for(i=0; i <N; ++i){
            VisualizarDatos(i);
        }

        return 0;
    }

    void datosClientes (int i)
    {
        printf("\ningrese nombre del cliente: %d\n",i+1);
        //scanf(" %s", cliente[i].nombre);
        scanf(" %[^\n]", cliente[i].nombre);

        printf("\nIngrese la fecha de Pago del cliente: %d\n",i+1);
        printf("\nIngrese el mes:\n");
        scanf("%d",&cliente[i].pago.mes);
        printf("\nIngrese el dia:\n");
        scanf("%d",&cliente[i].pago.dia);
        printf("\nIngrese el year:\n");
        scanf("%d",&cliente[i].pago.year);
        printf("\nIngrese el monto:\n");
        scanf("%f",&cliente[i].monto);
        
    }

    void VisualizarDatos( int i)
    {
        printf("\nEl nombre del cliente %d es: %s",i+1,cliente[i].nombre);
        printf("\nLa fecha de pago es: %d/%d/%d",cliente[i].pago.dia,cliente[i].pago.mes,cliente[i].pago.year);
        printf("\nEl monto de pago es: s/. %.2f\n",cliente[i].monto);
    }