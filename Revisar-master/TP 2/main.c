#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#define CANT 3

int main()
{
    int opcion=0;

    char name[51];
    char lastName[51];
    float salary;
    int sector;


    Employee employee[CANT];
    initEmployees(employee,CANT);

    do
    {
        switch(menu())
        {
        case 1:
                addEmployee(employee,CANT,employee[CANT].id,name, lastName, salary, sector);
                system("pause");
                break;
            case 2:


                break;
            case 3:
                break;
            case 4:
                mostrar(employee,CANT);
                system("pause");
                /*for(int i=0; i<CANT;i++)
                {
                    printf("Id: %d Name: %s Lastname: %s Salary: %f Sector: %d\n",employee[CANT].id,employee[CANT].name,employee[CANT].lastName,employee[CANT].salary,employee[CANT].sector);
                    system("pause");
                    break;
                }*/
            case 5:
                printf("Data collection completed");
                break;
            default:
                printf("Wrong option");
        }
    }while(opcion!=5);

    return 0;
}
