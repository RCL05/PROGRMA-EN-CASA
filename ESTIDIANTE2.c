/**
 * @file ESTIDIANTE2.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */
int main (){
 float nota_TC_EC, nota_LPC, nota_AA, nota_EV;
 float notafinal ;
 char estado ;
 printf ("NOTA PROMEDIO DE TRABAJOS CLASE Y EXTRACLASE :");
 scanf ("%f", &nota_TC_EC );
 printf ("NOTA PROMEDIO DE lecciones Y participaciones :");
 scanf ("%f", &nota_LPC );printf ("NOTA PROMEDIO DE TRABAJOS CLASE Y EXTRACLASE :");
 printf ("NOTA PROMEDIO DE APRENIZAJE AUTONOMO :");
 scanf ("%f", &nota_AA );
 printf ("NOTA PROMEDIO DE EVALUACIONES :");
 scanf ("%f", &nota_EV );
 notafinal = nota_AA + nota_EV + nota_LPC + nota_TC_EC ;
 if ( notafinal > 10 && notafinal < 0)
 {
     printf ("CORRIGA LOS VALORES DE LOS PARAMETROS /n");
     estado = "NO EXISTE";
      } else
      {
        if (notafinal >= 7.0 && notafinal <= 10)
        {
          estado = "APROBADO";   
        } else
        {
            if (notafinal >= 2.40 && <= 7.0)
            {
                estado= "en suspenso";
            } else
                         
            
        }
        
        
      }
      
 
 

    



    return 0;
}


