/*NAME: PETERSON MURIUKI MUNENE
REG NO :CT100/G/30653/26
DESCRIPTION VOLUME AND SURFACE AREA OF A CYLINDER
*/

#include <stdio.h>  // Imclude the standard input/output lib

#define PI 3.142  // Define the value of Pi for math calculation

int main() {
    float radius, height;  // Declarr variables to store the radius and height of the 

    // Prompt the user to enter the radius of the cylinder
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);  // Read the user imput and store it in the 'radius' variable

    // Prompt the user to enter the height of the cylinder
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);  // Read the user input and store it in the 'height' variable

    // Calculate the surface area of the cylinder
    float surfaceArea = 2 * PI * radius * (radius + height);

    // Calculate the volume of the cylinder
    float volume = PI * radius * radius * height;

    // Display the calculated surface area
    printf("Surface Area: %.2f\n", surfaceArea);  // Print the surface area with 2 decimal places

    // Display the calculated volume
    printf("Volume: %.2f\n", volume);  // Print the volume with 2 decimal places

    return 0;  // Return 0 to indicate successful execution of the program
}
