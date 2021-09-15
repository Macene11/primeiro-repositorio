#include<stdio.h>
#include<stdlib.h>
 
int main(){
float salario,inss,is,bruto,descontos;

printf("digite seu salario:\n");
scanf("%f",&salario);

if(salario<=1693.72)
{
	inss=salario*0.08;
}
else
if(salario>=1693.73 && salario<=2822.90)
{
	inss=salario*0.09;
}
else
if (salario>=2822.90 && salario<=5646.80)
{
    inss=salario*0.11;
}
else
if (salario>=5464.80)
{
    inss=621.04;
}

if(salario<=1693.72){

    is=0;
}
else
if(salario>=1693.73 && salario<=2822.90)
{
	is=salario*0.03;
}
else
if (salario>=2822.90 && salario<=5646.80)
{
    is=salario*0.05;
}
else
if (salario>5464.80)
{
    is=0.10;
}
bruto=salario-inss-is;
descontos=inss+is;
printf("ok, voce recebe %.2f\n",salario);
printf("salario bruto: %.2f\n",bruto);
printf("o total desconto: %.2f\n",descontos);

	return 0;
	
	
}
