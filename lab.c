#include <stdio.h>
#include <stdlib.h>

int main()
{
	float t;
	char sc, pr;
	 printf( "Temperature converter\n\n");
	 printf("Enter temperature and scale:  ");
	 scanf( "%f", &t);
	 pr = getchar();
     if (pr == ' ') scanf("%c", &sc);

        switch (sc)
       {
        	case 'C': /*if celsius */
        		printf ("%.2f C\n", t);
        		printf ("%.2f F\n", (9 * t / 5) + 32);
        		printf ("%.2f K\n", t + 273.15);
        	break;

    		case 'K': /*if kelvin */
        		printf ("%.2f K\n", t);
        		printf ("%.2f C\n", t - 273.15);
        		printf ("%.2f F\n", (9 * (t - 273.15) / 5) + 32);
        	break;

    		case 'F': /*if fahrenheit */
        		printf ("%.2f F\n", t);
        		printf ("%.2f C\n", 5 * (t - 32) / 9);
        		printf ("%.2f K\n", 5 * (t - 32) / 9 + 273.15);
        	break;

    		default: /*if we don't know scale */
		        printf ("%.2f C:\n", t);
		        printf ("%.2f K\n", t + 273.15);
		        printf ("%.2f F\n\n", (9 * t / 5) + 32);

		        printf ("%.2f K:\n", t);
		        printf ("%.2f F\n", (9 * (t - 273.15) / 5) + 32);
		        printf ("%.2f C\n\n", t - 273.15);

		        printf ("%.2f F:\n", t);
		        printf ("%.2f K\n", 5 * (t - 32) / 9 + 273.15);
		        printf ("%.2f C\n", 5 * (t - 32) / 9);
        	break;
       }
    return 0;
}