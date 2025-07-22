#include<stdio.h>
int main(){


float doorlen,doorbre;
float windowlen,windowbre;
float roomlen,roombre,roomhei;

printf("Enter dimensions of Door\n");
scanf("%f%f",&doorlen,&doorbre);
printf("Enter dimensions of Window\n");
scanf("%f%f",&windowlen,&windowbre);
printf("Enter dimensions of Room\n");
scanf("%f%f%f",&roomlen,&roombre,&roomhei);

float surfacearearoom=2*((roomlen*roombre)+(roombre*roomhei)+(roomlen*roomhei));
float areaofdoor=2*(doorlen*doorbre);
float areaofwindow=doorlen*doorbre;

float areaWhitewashed=roomlen*roombre;

 float Areatobepainted=surfacearearoom-(areaofdoor+(2*areaofwindow)+areaWhitewashed);

printf("Area to be painted%f\n",Areatobepainted);
printf("Area to be WhiteWashed%f",areaWhitewashed);

    return 0;
}