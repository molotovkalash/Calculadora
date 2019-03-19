//

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define CK 6.62607015 * pow(10, 34) 
#define PI 3.14159265

int main() {
	
	
        int answer;
        int r[2800 + 1];
        int i, k;
        int b, d;
        int c = 0;

	float energy;
	float freyoma;
	
	double arcnumberone;
	double doresult;
	double val;
	double hynumberone;
	double numbersone;
	double numberstwo;
	double numberone;
        double numbertwo;
	
        printf("Bonjour, je suis Iwakura Lane, je vais vous présenter la calculatrice\n");
        printf("Cette Calculatrice prend en charge:\n");
	
	printf("\n");
	
        printf("1 - Logarithmes\n");
        printf("2 - Fonctions Trigonométriques\n"); 
        printf("3 - Valeurs absolues\n"); 
        printf("4 - Racine Carrée\n");
        printf("5 - Module\n");
        printf("6 - Opérations de base\n"); 
	printf("\n");

        printf("Allons-nous commencer?\n");
        printf("Choisissez une opération:\n");

	printf("\n");

	while (answer != 20)
	{

	  printf("\n\nOpérations de Base\n");
	  printf("1 - Addition \n");
	  printf("2 - Subtraction\n");
	  printf("3 - Multiplication\n");
	  printf("4 - Division\n");	

	  printf("5 - Racine Carrée\n");

	  printf("\n\nTrigonométry\n\n");
	
	  printf("6 - Du sein\n");
	  printf("7 - Cosinus\n");	
	  printf("8 - Tangente\n");
	  printf("9 - Bow (Du sein)\n");
	  printf("10 - Bow (Cosinus)\n");
	  printf("11 - Bow (Tangente)\n");
	  printf("12 - Hyperbolic (Du sein)\n");
	  printf("13 - Hyperbolic (Cosinus)\n");
	  printf("14 - Hyperbolic (Tangente)\n");

3	  printf("\n\nBepop Beep \n\n");
	
	  printf("15 - Module\n");

	  printf("16 - logarithm naturel\n");
	  printf("17 - logarithm en base 10\n");

	  printf("18 - Valeur Absolue\n");
	
	  printf("19 - Pi \n");
	
	  printf("\nCalculs Physiques\n");

	  printf("\n20 - Le Equation de Planck\n");
	 
	  printf("\n21 - Sortie\n");
	
	  printf("\n");
	  printf("Answer: ");
	  scanf("%d", &answer);
	  printf("\n");


	  switch(answer)
	    {
	  case c == 1) // Do the addition 
	    {
		
	      printf("Entrez le numéro que vous voulez ajouter: ");
	      scanf("%lf", &numberone);
	      printf("\n");
	      printf("Entrez le numéro que vous voulez ajouter: ");
	      scanf("%lf", &numbertwo);
	      printf("\n");
	      doresult = numberone + numbertwo;
	      printf("C'est le résultat de votre somme: %lf\n\n", doresult);
	    }

	  if (answer == 2) // Do the subtraction
	    {
		
	      printf("Entrez le numéro que vous voulez soustraire: ");
	      scanf("%lf", &numberone);
	      printf("\n");
	      printf("Entrez le numéro que vous voulez soustraire: ");
	      scanf("%lf", &numbertwo);
	      printf("\n");
	      doresult = numberone - numbertwo;
	      printf("C'est le résultat de votre différence: %lf\n\n", doresult);
		
	    }

	  if (answer == 3) // Do the multiplication
	    {

	      printf("Entrez le numéro que vous voulez multiplier: ");
	      scanf("%lf", &numberone);
	      printf("\n");
	      printf("Entrez le numéro que vous voulez multiplier: "); 
	      scanf("%lf", &numbertwo);
	      printf("\n");
	      doresult = numberone * numbertwo;
	      printf("C'est le résultat de votre multiplication: %lf\n\n", doresult);
	    }

	  if (answer == 4) // Do the Division
	    {
		
	      printf("Entrez le numéro que vous voulez divisez: ");
	      scanf("%lf", &numberone);
	      printf("\n");
	      printf("Entrez le numéro que vous voulez divisez: "); 
	      scanf("%lf", &numbertwo);
	      printf("\n");
	      doresult = numberone/numbertwo;
	      printf("C'est le résultat de votre division: %lf\n\n", doresult);
		
	    }
	  
	  if (answer == 5) // Do the Square root
	    {
	      
	      printf("Entrez le nombre que vous voulez faire la racine carrée: ");
	      scanf("%lf", &numberone);
	      printf("\n");
	      doresult = sqrt(numberone);
	      printf("C'est le résultat de votre Racine Carré: %lf\n\n", doresult);

	    }
	  
	  if (answer == 6) // Do the Sine of an angle
	    {
		
	      printf("Entrez le nombre que vous voulez faire le du sein: ");
	      scanf("%lf", &numberone);
	      printf("\n");
	      val = PI / 180;
	      doresult = sin(numberone*val);
	      printf("C'est le résultat de la poitrine: %lf\n\n", doresult);
	      
	    }
	  
	  if (answer == 7) // Do the cossine of an angle
	    {
	      printf("Entrez le nombre que vous voulez faire le cosinus: ");
	      scanf("%lf", &numberone);
	      printf("\n");
	      val = PI / 180;
	      doresult = cos(numberone*val);
	      printf("C'est le résultat du cosinus: %lf\n\n", doresult);
	      
	    }
	  
	  if (answer == 8) // Do the tangent of an angle
	{
	  printf("Entrez le nombre que vous voulez faire la tangente: ");
	  scanf("%lf", &numberone);
	  printf("\n");
	  val = PI / 180;
	  doresult = tan(numberone*val);
	  printf("Ceci est le résultat de la tangente: %lf\n\n", doresult);
	  
	}
	  
	  if (answer == 9) // Do the sine of an Arc
	{
	  printf("Entrez le nombre que vous voulez faire le Arc de poitrine: ");
	  scanf("%lf", &arcnumberone);
	  printf("\n");
	  val = 180.0 / PI;
	  doresult = asin(arcnumberone) * val;
	  printf("Ceci est le résultat de le Arc de poitrine (: %lf\n\n", doresult);
	}
	  
	  if (answer == 10) // Do the cossine of an Arc
	  {
	    printf("Entrez le nombre que vous voulez faire le arc cosinus: ");
	    scanf("%lf", &arcnumberone);
	    printf("\n");
	    val = 180.0 / PI;
	    doresult = acos(arcnumberone) * val;
	    printf("C'est le résultat du cosinus: %lf\n\n", doresult);
	    
	}
	  
	  if (answer == 11) // Do the cossine of an Arc
	  {
	    printf("Entrez le nombre que vous voulez faire le arc du tangente: ");
	    scanf("%lf", &arcnumberone);
	    printf("\n");
	    val = 180.0 / PI;
	    doresult = atan(arcnumberone) * val;
	    printf("Ceci est le résultat de la tangente: %lf\n\n", doresult);

	  }
		       
	  if (answer == 12) // Do the sine of an Hyperbole 
	  {
	    printf("Entrez le nimbre que vous voulez faire le Hyperbole de le du sein: ");
	    scanf("%lf", &hynumberone);
	    printf("\n");
	    doresult = sinh(hynumberone);
	    printf("Voici le résultat de l'hyperbole de le du sein %lf\n", doresult);
		
	  }

	  if (answer == 13) // Do the cosinus of an Hyperbole
	  {
	    printf("Entrez le nimbre que vous voulez faire le Hyperbole de le cosinus: ");
	    scanf("%lf", &hynumberone);
	    printf("\n");
	    doresult = cosh(hynumberone);
	    printf("Voici le résultat de l'hyperbole cosinus %lf\n", doresult);
	  
	  }

	  if (answer == 14) // Do the Tangent of an Hyperbole
	  {
	    printf("Entrez le nimbre que vous voulez faire le Hyperbole de le tangent: ");
	    scanf("%lf", &hynumberone);
	    printf("\n");
	    doresult = tanh(hynumberone);
	    printf("Voici le résultat de l'hyperbole cosinus %lf\n", doresult);
	    
	  }
	
	  if (answer == 15) // Do the remainder
	  {
	    printf("Le premier numéro du reste: ");
	    scanf("%lf", &numbersone);
	    printf("\n");
	    printf("Le second: ");
	    scanf("%lf", &numberstwo);
	    printf("\n");
	    doresult = fmod(numbersone, numberstwo);
	    printf("C'est le résultat de votre reste: %lf\n\n", doresult);
	  }
	
	  if (answer == 16) // Do the Logarithm in natural base
	  {
	    printf("Le numéro: ");
	    scanf("%lf", &numbersone);
	    printf("\n");
	    doresult = log(numbersone);
	    printf("C'est le résultat de votre logarithm: %lf\n\n", doresult);
	  }
	
	  if (answer == 17) // Do the Logarithm in base 10
	  {
	    printf("Le numéro: ");
	    scanf("%lf", &numbersone);
	    printf("\n");
	    doresult = log10(numbersone);
	    printf("C'est le résultat de votre logarithm de base 10: %lf\n\n", doresult);
	  }
	
	  if (answer == 18) // Do the absolute value
	  {
	    printf("Le numéro: ");
	    scanf("%lf", &numbersone);
	    printf("\n");
	    doresult = fabs(numbersone);
	    printf("C'est le résultat de votre valeur absolue: %lf\n\n", doresult);
	  }
	  
	  if (answer == 19) // DO THE PI CALCULATIONS, (OH LORD HEAR MY PRAISES, I LITERALLY STAYED AT 2 AM SOLVING THIS PROBLEM WTFFFFFFFFFF)
	    {
	    for (i = 0; i < 2800; i++) {
	      r[i] = 2000;
	    }
	    
	    for (k = 2800; k > 0; k -= 14) {
	      d = 0;
	      
	      i = k;
	      for (;;) {
		d += r[i] * 10000;
		b = 2 * i - 1;
		
		r[i] = d % b;
		d /= b;
		i--;
		if (i == 0) break;
		d *= i;
	      }
	      printf("%.4d", c + d / 10000);
	      c = d % 10000;
	    }
	  }
	  

	}

	if (answer == 20) //
	  {
	    printf("Le numéro de fréquence de rayonnement életromagnétique: ");
	    scanf("%f", &freyoma);
	    printf("\n");
	    energy = freyoma * CK;
	    printf("C'est le resultát de la equation: %f\n", energy);
	  }

	if (answer == 21) 
	  {

	    printf("Goodbye!!! Have a great time.");
	    printf("\n\n");
	    
	  }
}

