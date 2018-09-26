#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#define TRUE 1
#define FALSE 0


static int generarNextId()
{
    static int id=-1;
    id++;
    return id;
}

int initEmployees(Employee* list, int len)//void init(EPersona lista[], int len)
{
    int i;
    int retorno=0;

    if(list==NULL)
    {
       if(len<=0)
       {
           retorno = -1;
       }
    }
    for(i=0; i<len; i++)
    {
        list[i].isEmpty = TRUE;
    }

    return retorno;
}

int getFreeSpace(Employee list[], int len)
{
    int i;
    int retorno = -1;

    for(i=0; i<len; i++)
    {
        if(list[i].isEmpty == 1)
        {
            retorno = i;
            break;
        }
    }
    return retorno;
}


int addEmployee(Employee* list, int len, int id, char name[],char lastName[],float salary,int sector)
{
    Employee employee;
    int retorno= -1;
    int found;

    found = getFreeSpace(list,len);

    if(found != -1)
    {
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(employee.name);

        printf("Ingrese apellido: ");
        fflush(stdin);
        gets(employee.lastName);

        printf("Ingrese salario: ");
        scanf("%f",&employee.salary);

        printf("Ingrese sector: ");
        scanf("%d",&employee.sector);

        employee.id=generarNextId();//ID
        employee.isEmpty=FALSE;

        list[found]=employee;
    }
    else
    {
        printf("There is not space\n\n");
    }

    return retorno;
}
int displayEmployees(Employee list[], int len)
{
     for(int i=0; i<len;i++)
    {
        if(!list[i].isEmpty)
        {
            printf("Id: %d Name: %s Lastname: %s Salary: %f Sector: %d\n",list[i].id,list[i].name,list[i].lastName,list[i].salary,list[i].sector);
        }
    }
    return 0;
}
int displayEmployee(Employee list[], int len, int id)
{
    int found;

    printf("Ingrese el id: ");
    scanf("%d",&id);
    found=getFreeSpace(list[].id,len);

    if (found>=0)
    {
        printf("Usuario: ",found);
    }
    else
    {

    }

}
int menu()
{
    int opcion=0;
    system("cls");
    printf("--MENU--\n\n");
    printf("1- ALTAS\n");
    printf("2- BAJAS\n");
    printf("3- MODIFICACIONES\n");
    printf("4- INFORMAR\n");
    printf("5- Salir\n\n");
    fflush(stdin);
    scanf("%d",&opcion);

    return opcion;
}

int removeEmployee(Employee* list, int len, int id)
{
    int retorno= -1;
    int found;
    int id;
    char eliminar;

    printf("Ingrese el ID del empleado que desea eliminar: ");
    scanf("%d",&id);
    found = getFreeSpace(list,len);

    if(found == -1)
    {
        printf("Usuario no encontrado",found);
    }
    else
    {
        displayEmployee(list[found].id,len);
        printf("¿Esta seguro que desea eliminar este usuario? s/n")
        scanf("%c",&eliminar);

        if(eliminar=='s')
        {
            list[found].isEmpty=1;
            printf("Usuario eliminado\n\n");
        }
        else
        {
            printf("Cancelado");
        }
        system("pause");
    }

    return retorno;
}
/*int getById(Empoyee*list,int len,int id)
{
    int retorno = -1, i;
    if(list!=NULL&&len>0)
    {
        for(i=0; i<len;i++)
        {
            if(list[i].id==)
        }
    }
}*/


