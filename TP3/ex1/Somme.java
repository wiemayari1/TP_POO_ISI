package ex1;
public class Somme {
	    public static <T extends Number> double somme(T[] tab, int n) {
	        double som = 0;
	        for (int i = 0; i < n; i++) {
	            som += tab[i].doubleValue();
	        }
	        return som;
	    }
}

