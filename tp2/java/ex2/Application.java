package com.java.ex2;

public class Application {

	public static void main(String[] args) {
		Etudiant etud1= new Etudiant("Wiem","Ayari",154676);
		Etudiant etud2= new Etudiant("Ranim","Ourari",273356);
		Employe e1= new Employe("Zeineb","Ghazeli", 2000.5);
		Employe e2= new Employe("Aya","Sakroufi",2000.8);
		Professeur p1= new Professeur("Arij","Sebai",4000.0,"IDISC");
		Professeur p2=new Professeur("Hadil","Hasni",3500.0,"info");
		System.out.println("Etudiant 1 : "+etud1.toString());
		System.out.println("Etudiant 2 : "+etud2.toString());
		System.out.println("Employe 1 : "+e1.toString());
		System.out.println("Employe 2 : "+e2.toString());
		System.out.println("Prof 1 : "+p1.toString());
		System.out.println("Prof 2 : "+p2.toString());
			
		
	
	}

}
