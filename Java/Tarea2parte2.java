package tarea1;

import java.util.Scanner;

public class Tarea2parte2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner teclado = new Scanner(System.in);
		
		String frase;
		int total_vocales=0;
		char vocal;
		
		System.out.println("Ingrese una frase:");
        frase = teclado.nextLine();
		
        for (int i=0; i<frase.length(); i++) {
            vocal=frase.charAt(i);
            if (vocal=='a'||vocal=='e'||vocal=='i'||vocal=='o'||vocal=='u') {
                total_vocales++;
            }
        }

        System.out.println("Vocales: " + total_vocales);

        char[] frase2= new char[frase.length()];
        
        for (int i=0; i<frase.length(); i++) {
            if (frase.charAt(i)=='a') {
            	frase2[i]='e';
            } else {
            	frase2[i]=frase.charAt(i);
            }
        }

        for (int i=0; i<frase.length(); i++) {
            System.out.print(frase2[i]);
        }
    }
}
     
		
