package tarea1;

import java.util.Random;
import java.util.Scanner;

public class Tarea1parte1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner teclado = new Scanner(System.in);
        Random random = new Random();
        
        int[] arrayNormal = new int[5];
        int[] arrayInvertido = new int[5];
        int aleatorio;
        int contador=0;
        int conta=0;
        int posicion=0;
        int numero=0;
        
        do {
        	
        	aleatorio = random.nextInt(100);
        	if(aleatorio !=0 ) {
        		arrayNormal[contador]=aleatorio;
            	contador++;
        	}
       
        }while(aleatorio != 0 && contador < 5);
        
        for(int i = contador-1; i>=0; i--) {
        	arrayInvertido[i]=arrayNormal[conta];
        	conta++;
        };
        	
        System.out.println("Lista Normal:");
        for(int i=0; i<contador; i++) {
        	System.out.print(arrayNormal[i] + "  ");
        }
        System.out.println("\nLista Invertida:");
        for(int i=0; i<contador; i++) {
        	System.out.print(arrayInvertido[i] + "  ");
        }
        
        
        System.out.println("\n¿En qué posición quiere introducir un número?");
        posicion = teclado.nextInt() - 1;
        System.out.println("\n¿Qué número?");
        numero = teclado.nextInt();
        
        
        arrayNormal[posicion]=numero;
        arrayInvertido[contador-posicion-1]=numero;
        
        System.out.println("Lista Normal cambiada:");
        for(int i=0; i<contador; i++) {
        	System.out.print(arrayNormal[i] + "  ");
        }
        System.out.println("\nLista Invertida cambiada:");
        for(int i=0; i<contador; i++) {
        	System.out.print(arrayInvertido[i] + "  ");
        }
        
	}
}
