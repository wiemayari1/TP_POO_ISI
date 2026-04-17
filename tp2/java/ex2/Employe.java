package com.java.ex2;

public class Employe extends Personne {
	double salaire;
	
	
	public Employe(String nom, String prenom, double salaire) {
		super(nom,prenom);
		this.salaire=salaire;
	}
	
	@Override
    public String toString() {
		
        return "Etudiant [salaire=" +salaire+ super.toString()+"]";
    }
    
	public double getSalaire() {
    	return salaire;
    }
 public void setSalaire(double salaire) {
	 this.salaire=salaire;
	 
 }
}
