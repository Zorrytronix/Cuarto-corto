 #include <iostream>
 #include <string>

 using namespace std;

    int media (int alumno[])
    {
    int suma = 0;
    int  media = 0;
    suma = 0;

    for(int i = 0; i < 25; i++){
        suma = suma + alumno[i];
        media= suma/25;
    }

    return media;
    }


    void comparacion(int alumno[], int media )
    { 
        int men = 0, may = 0;

        for (int i=0; i<25; i++){          
            if (alumno[i] < media)
            {            
                men ++;
            }

            else if (alumno[i] > media )
            {
                may ++;
            }  
        }
    cout <<"tiene: "<<may<<" arriba de la media"<< endl;

    cout <<"tiene: "<< men<< " abajo de la media."<< endl;  
    }


    int main (void)
    { 
    int cm,  i, alumno[25];

    cout << "CALCULO DE PROMEDIO DE UNA CLASE"<< endl;

    cout << "Por favor ingrese las medidas de cada alumno"<< endl;

    for(int i = 0; i < 25; i++)
    {
    cout<< i+1<< " = ";
    cin >> alumno[i]; 
    }
    
    cout << "La media es: "<< media(alumno)<< endl;

    comparacion(alumno, media(alumno)); 

        system("pause");
        return 0; 
    }