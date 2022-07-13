#include <iostream>
#include <cstdlib>
#include <math.h>
/* TALLER 6 */
using namespace std;
int main(int argc, char** argv) 
{
	int opc, v[100]={0},i,n,men,may,posm,posmay,div,j,mayp,posp,m,rep,cta;
	int vr[100]={0}, A,B,pos,sum, v1[100]={0},k,ctap,ctan, vmay[n],vpos[n];
	int semisum,ant,sig,ter, npar, vpar[10]={0}, vter[10];
	float sum1=0,prom;
	cout<<endl<<endl;
	do
	{
	system("cls");
	cout<<endl<<endl;
	men=999999;
	may=-999999;
	mayp=0; /*Porque 0 y 1 son los dos primeros numeros mas pequeños, siendo 2 el primo mas pequeñito*/
	posp=0;
	ctap=0;
	ctan=0;
	k=0;
	ant=0;
	sig=1;
	ter=ant+sig;
	pos=0;
	cout<<"\t \t *****MENU DE OPCIONES***** "<<endl;
	cout<<"\t \t  EJERCICIOS DEL TALLER 6 "<<endl;
	cout<<"\t       1- CAPTURA            "<<endl;
	cout<<"\t       2- ESCRITURA          "<<endl;
	cout<<"\t       3- EJERCICIO 1        "<<endl;
	cout<<"\t       4- EJERCICIO 2        "<<endl;
	cout<<"\t       5- EJERCICIO 3 y 4    "<<endl;
	cout<<"\t       6- EJERCICIO 5        "<<endl;
	cout<<"\t       7- EJERCICIO 6        "<<endl;
	cout<<"\t       8- EJERCICIO 7        "<<endl;
	cout<<"\t       9- EJERCICIO 8        "<<endl;
	cout<<"\t       10- EJERCICIO 9        "<<endl;
	cout<<"\t       11- EJERCICIO 10        "<<endl;
	cout<<"\t       12- EJERCICIO 11       "<<endl;
	cout<<"\t       13- EJERCICIO 12       "<<endl;
	cout<<"\t       14- EJERCICIO 13       "<<endl;
	cout<<"\t       15- EJERCICIO 14       "<<endl;
	cout<<"\t       16- EJERCICIO 16       "<<endl;
	cout<<"\t       17- EJERCICIO 17       "<<endl;
	cout<<"\t       18- EJERCICIO 18      "<<endl;
	cout<<"\t       19- EJERCICIO 19      "<<endl;
	cout<<"\t       20- EJERCICIO 20      "<<endl;
	cout<<"\t       21- TERMINAR          "<<endl;
	cout<<" POR FAVOR ELIJA SU OPCION ";
	cin>>opc;
	system("pause");
	system("cls");
	switch(opc)
	{
	
	case 1: cout<<" Digite Total de numeros a procesar ";
	        cin>>n;
	        cout<<"\t CAPTURA VECTOR "<<endl;
        	for(i=0;i<n;i++)
	         {
	           cout<<" ingrese el ["<<i+1<<"] elemento ";
	            cin>>v[i];
        	}
	      cout<<endl<<endl;
	      system("pause");
	      break;
	
	case 2 : cout<<"\t ESCRITURA VECTOR "<<endl;
	         
	         for(i=0;i<n;i++)
	          {
	            cout<<" ["<<v[i]<<"] ";
            	}
	          cout<<endl<<endl;
	           system("pause");
	           break;
	           
	case 3: cout<< " SUMA Y PROMEDIO DE UN VECTOR "<<endl;
	        sum=0;
			cout<<endl;
			for (i=0;i<n;i++)
			{
			   sum1=sum1+v[i];
			   }
			   prom=sum1/n;
			   cout<<endl;
			   cout<<"El valor de la suma es "<<sum1<<endl;
			   cout<<"El valor del promedio es "<<prom<<endl;
			   system ("pause");
			   break;
	
	case 4: cout<< " VALORES POSITIVOS Y NEGATIVOS DE LA SECUENCIA  "<<endl;
			cout<<endl;
			for (i=0;i<n;i++)
				{
				  if(v[i]>=0)
				   {
				    ctap++;
					}
				   else
			    	{
			    	ctan++;
			    	}
			    } 
				cout<<"La cantidad de numeros positivos es "<<ctap<<endl;
				cout<<"La cantidad de numeros negativos es "<<ctan<<endl;
				system("pause");
				break;
				
	case 5:	cout<<"\t DETERMINA EL NUMERO MENOR Y MAYOR DEL VECTOR "<<endl;
	        men=v[0];
			for(i=0;i<n;i++)
			{
			     if(v[i]<men)
				  {
 			        men=v[i];
 			        pos=i;
		           }
		         if(v[i]>may)
		          {
		         	may=v[i];
		 	        posm=i;
		         }
	        }
			cout<<"El menor elemento es "<<men<<" en la posicion "<<pos+1<<endl;
			cout<<"El mayor elemento es "<<may<<" en la posicion "<<posm+1<<endl;
			system("pause");		
			break;
	
	case 6: cout<<"\t POSICION DEL MAYOR PAR"<<endl;
	        pos=0;
        	for(i=0;i<n;i++)
			 {
			 cout<<" Ingrese el ["<<i+1<< "] elemento a procesar ";
			 cin>>v[i]; 
			   if(v[i]>may)
			   {
			   may=v[i];
			   pos=i;	
			   }	
			   }
			   cout<<endl;
			   cout<<"\t ESCRITURA VECTOR "<<endl;
			     for(i=0;i<n;i++)
				 {
				 cout<<" ["<<v[i]<< "] ";	
				 }
				 cout<<endl;
				 cout<<"\t REPETIDO MAY VECTOR "<<endl;
				 rep=0;
				 k=0;
				   for(i=0;i<n;i++)
				     {
					 if(v[i]==may)
					 {
					 rep++;
					 vmay[k]=v[i];
					 vpos[k]=i;
					 k++;	
					 }	
					 }
					 cout<<" el mayor es "<<may<<" posicion "<<pos+1;
					 cout<< " esta repetido "<<rep<<" veces "<<endl;
					 cout<<"\t VECTOR MYORES Y SUS POSICIONES  "<<endl;
					 for(i=0;i<k;i++)
					 {
					     cout<<" ["<<vmay[i]<< "] ["<<vpos[i]+1<<" ] "<<endl;	
						 }
						 system("pause");
						 break;		
					
	case 7: cout<<" DETERMINA EL NUMERO PAR MAYOR DEL VECTOR "<<endl;
	        may=v[0];
	        posm=0;
			for(i=0;i<n;i++)
			{
			   cout<<"["<<v[i]<<"] "<<endl;
			   if (v[i]%2==0)
			      {
				    if(v[i]>may)
					{
					    may=v[i];
						posm=i;
						vpar[k]=v[i];
						vpos[k]=i;
						k++;
						 }
				 }
			}
			cout<<"El mayor elemento par  es "<<may<<" en la posicion "<<posm+1<<endl;
			cout<<endl<<endl;
			system("pause");
			system("cls");
	 cout<<"\t VECTOR PAR Y SUS POSICIONES "<<endl;
	 posm=0;
	 may=-9999999;
	     for (i=0;i<k;i++)
		 {
		    if (vpar[i]>may)
		      {
			     may=vpar[i];
		 	    posm=vpos[i];
		       }
		     cout<<"["<<vpar[i]<< "] [" <<vpos[i]+1<<" ] "<<endl;
	 	}	 
		 system("pause");
	     break;
	     
	 case 8: cout<<"\t VECTOR FINOBACCI "<<endl;
	         for(i=3;i<=10;i++)	
			 {
			 ant=sig;
			 sig=ter;
			 ter=ant+sig;
			 v[i]=ter;
			 }
			 cout<<endl<<endl;
			    for(i=3;i<=10;i++)
			   {
			   cout<<" ["<<v[i]<<"] ";
			   }
			   system("pause");  
			   break;
	
	case 9:	 cout<<" ESCRITURA DEL VECTOR DE CUADRADOS "<<endl;
	      	for(i=0;i<10;i++)
			  {
			  npar=pow(v[i],2);
			  vpar[i]=npar;
			  cout<<"["<<vpar[i]<<"] "<<endl;
			  }
	          system ("pause");	   
	          break;
	          
	case 10: cout<<" ESCRITURA DEL VECTOR DE DE NUMEROS FINALIZADOS EN 4 "<<endl;
	         j=0;
			 for(i=0;i<10;i++)
			 {
			    if(v[i]%10==4 || v[i]%10==-4)
 	             	{
 		            	vter[j]=v[i];
 		            	j++;	
		             }
 	          }
			   cout<<endl<<endl;
			   for(i=0;i<j;i++)
			   {
			         cout<<" ["<<vter[i]<<"] en "<<" ["<<i+1<<"] posicion "<<endl;
	             }
				 	system ("pause");
				 	break;
			   
	case 11: cout<<" ESCRITURA DEL VECTOR DE DE NUMEROS FINALIZADOS EN 15 "<<endl;
             j=0,sum=0;
			  for(i=0;i<10;i++)
			  {
		        	  if(v[i]%100==15 || v[i]%100==-15)
					  	{
						  cout<<" ["<<v[i]<<"] en "<<" ["<<i+1<<"] posicion "<<endl;
						  sum=sum+v[i];
						  }
				 }
						  cout<<" La suma de los numeros terminados en 15 es "<<sum<<endl;
						  system ("pause");
						  break;
					
	case 12 : cout<<"\t ELEMNENTOS CON MAS DE TRES DIGITOS "<<endl;
	         cout<<endl<<endl;
	         for(i=0;i<n;i++)
	          {
	            if (v[i]>999|| v[i]<-999)
	            {
	            	cout<<" ["<<v[i]<<"] en "<<" ["<<i+1<<"] posicion "<<endl;
				}
            	}
	           cout<<endl<<endl;
	           system("pause");
	           break;
	           
	case 13 : cout<<"\t MENOR NUMERO Y EL MAYOR DE LOS ELEMENTOS TERMINADOS EN 7 "<<endl;
	         cout<<endl<<endl;
	         posm=0, posmay=0;
	         for(i=0;i<n;i++)
	          {
	          	if(v[i]<men)
	          	{
	          		men=v[i];
	          		posm=i;
				  }
				if(v[i]%10==7 || v[i]%10==-7)
 	         	  {
 	         		if(v[i]>may)
 	         		{
 	         			may=v[i];
 	         			posmay=i;
					  }
                  	}
                 }
             cout<<" El menor elemento es "<<men<<" en la posicion "<<posm+1<<endl;
               if(may != -999999)
               {
               	cout<<" El mayor elemento terminado en 7 es "<<may<<" en la posicion "<<posmay+1<<endl;
			   }
			   else
			   {
			   	cout<<"No ingresaron numeros terminados en 7"<<endl;
			   }
	           cout<<endl<<endl;
	           system("pause");
	           break;          
	 
	 case 14  : cout<<"\t MAYOR PRIMO INGRESADO "<<endl;
	         cout<<endl<<endl;
	         for(i=0;i<n;i++)
	          {
	          	div=0;
	          	for(j=1;j<=v[i];j++)
	          	{
	          		if (v[i]%j==0)
	          		{
	          			div++;
	          			 }
	          	 }
				  if (div==2)
				  {
				  	if(v[i]>mayp)
				  	{
				  		mayp=v[i];
				  		posp=i;
					  }
				  }
            	}
               cout<<" El mayor elemento es "<<mayp<<" en la posicion "<<posp+1<<endl;
	           cout<<endl<<endl;
	           system("pause");
	           break;    
			   
	case 15 : cout<<"\t VECTOR COMPRENDIDO ENTRE A Y B "<<endl;
	         cout<<endl<<endl;
	         cout<<" Digite los valores para A y B ";
	         cin>>A>>B;
	         j=0;
	         if(A<=B)
	         {
			   for(i=0;i<n;i++)
	            {
	            	if( v[i]>=A && v[i]<=B)
	            	{
	            		vr[j]=v[i];
	            		cout<<" ["<<v[j]<<"] en "<<" ["<<i+1<<"] posicion "<<endl;
	            		j++;
					}
					else
					{
						cout<<"Los valores enteros no cumplen"<<endl;
					}
                	}
                    }
	           cout<<endl<<endl;
	           system("pause");
	           break;		                  
	
	case 16 : cout<<"\t SUMA DE ELEMENTOS EN POSICION PAR  "<<endl;
	         /*Para nosotros serian los impares si se utiliza i+1*/
			 cout<<endl<<endl;
	         for(i=0;i<n;i++)
	          {
	            if(i%2==0)
	            {
				    cout<<" ["<<v[i]<<"] en "<<" ["<<i<<"] posicion "<<endl;
				}
			  }
	           cout<<endl<<endl;
	           system("pause");
	           break;
			          
	case 17 : cout<<"\t SEMISUMA PAR O IMPAR "<<endl;
	         cout<<endl<<endl;
	         posm=0, posmay=0;
	         for(i=0;i<n;i++)
	          {
	          	if(v[i]<men)
	          	{
	          		men=v[i];
	          		posm=i;
				  }
		     	if(v[i]>may)
 	         		{
 	         			may=v[i];
 	         			posmay=i;
					  }
                  	
                 }
                 semisum=(may+men)/2.0;
                 /*Toco poner suma normal porque las entradas eran incongruentes*/
                 if (semisum%2==0)
                 {
                 	cout<<"La semisuma es par"<<endl;
				 }
				 else
				 {
				 	cout<<"La semisuma es impar"<<endl;
				 }
               cout<<endl<<endl;
	           system("pause");
	           break;   
			   
	case 18: cout<<"\t SUMA DE VECTORES "<<endl;
	        cout<<" Digite Total de numeros a procesar ";
	        cin>>n;
	        cout<<"\t CAPTURA VECTOR 1 "<<endl;
        	cout<<endl<<endl;
        	for(i=0;i<n;i++)
	         {
	           cout<<" ingrese el ["<<i+1<<"] elemento ";
	            cin>>v[i];
        	}
        	cout<<" Digite Total de numeros a procesar ";
	        cin>>n;
	        cout<<"\t CAPTURA VECTOR 2 "<<endl;
        	cout<<endl<<endl;
        	for(i=0;i<n;i++)
	         {
	           cout<<" ingrese el ["<<i+1<<"] elemento ";
	            cin>>v1[i];
        	}
	        cout<<"\t ESCRITUA VECTOR RESULTADO "<<endl;
        	cout<<endl<<endl;
        	for(i=0;i<n;i++)
	         {
	         	vr[i]=v[i]+v1[i];
	         	cout<<" ["<<vr[i]<<"] ";
	         	
        	}       
	      cout<<endl<<endl;
	      system("pause");
	      break;
	      
	case 19:  cout<<"\t PRIMOS DE 100 A 300 "<<endl;
        	  cout<<endl<<endl;
        	  k=0;
        	  for(i=100;i<300;i++)
	         {
	         	div=0;
	          	for(j=1;j<=i;j++)
	          	{
	          		if (i%j==0)
	          		{
	          			div++;
	          			 }
	          	 }
				  if (div==2)
				  {
				  	vr[k]=i;
				  	cout<<" ["<<vr[k]<<"] "<<endl;
				  	k++;
				  }
	         	
        	}    
			cout<<" y son "<<k<<" primos "<<endl;   
	        cout<<endl<<endl;
		    system("pause");
	        break;		                 
	           	  
	case 20 : cout<<"\t NUMERO EN UN VECTOR "<<endl;
	         cout<<"Por favor digite el numero a procesar ";
	         cin>>m;
	         rep=0;
	         for(i=0;i<n;i++) 
	          {
	          	if(v[i]==m)
				  {
				  	rep++;
				  	cout<<" ["<<v[i]<<"] en "<<" ["<<i+1<<"] posicion "<<endl;
				  	
				  }
				  else
				  {
				  	cout<<"El numero no pertenece al conjunto de vectores"<<endl;
				  }
	            
            	}
	           cout<<endl<<endl;
	           system("pause");
	           break;         	  
		  		                 
	           
	           
    }
	}while(opc!=21);
	
	system("pause");
	return 0;
}
