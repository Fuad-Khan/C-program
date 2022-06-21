
#include<stdio.h>
int main()
{
	float km,meter,feet,inches,centimeter;
	printf("Enter distance from Mirpur to Ashulia: ");
	scanf("%f",&km);
	meter=km*1000;
	feet=km*3280.8399;
	inches=km*39370.078;
	centimeter=km*100000;

	printf("Distance in meter from Mirpur to Ashulia:%.2f\n",meter);
	printf("Distance in feet from Mirpur to Ashulia:%.2f\n",feet);
	printf("Distance in inches from Mirpur to Ashulia:%.2f\n",inches);
	printf("Distance in centimeter from Mirpur to Ashulia:%.2f\n",centimeter);



	return 0;
}
