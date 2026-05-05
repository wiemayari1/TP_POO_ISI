package ex3;
public class Pointcol<T, C> {
	    private T x;      
	    private T y;      
	    private C couleur;
	    public Pointcol(T x, T y, C col) {
	        this.x      = x;
	        this.y      = y;
	        this.couleur = col;
	    }
	    public void affiche() {
	        System.out.println("Coordonnées : (" + x + ", " + y + ")" + " | Couleur : " + couleur);
	    }
}

