#include "iostream"
#include "cstdlib"

using namespace std;

int main()
{
    int fi,co[50][5],i,m;

    float final[50],suma[50];
    
    m=0;

    cout << "Por favor ingrese el numero de estudiantes" << endl;
     cin >> fi;

    for (m = 0; m < fi;i++)
    {
     m+=1;
     cout << "por favor ingrese la nota del estudiante " << m << endl;

        for (i = 0; i < 5; i++)
         {
            cin >> co[m][i];
         }

     suma[m] = co[m][0]+co[m][1]+co[m][2]+co[m][3]+co[m][4];

     final[m] = suma[m]/5;

    }

    cout << "Por favor escriba el numero del estudiante a consultar" << endl;
     cin >> m;

    cout << "Las notas son:" << endl;
    
     for (i = 0; i < 5; i++)
     {
         cout << co[m][i] << endl;
     }

    cout << "El promedio final es:" << endl << final[m] << endl;

     if (final[m] >= 6)
     {
         cout << "Aprobado" << endl;
     }
     else
     {
         cout << "Reprobado" << endl;
     }

    system ("pause");
    return 0;  
} 