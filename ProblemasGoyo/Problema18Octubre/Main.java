import java.math.BigInteger;
import java.util.*;

class Main {
	public static void main (String[] args){
		Scanner sc = new Scanner(System.in);

        BigInteger t1 = new BigInteger(sc.next());
        BigInteger t2 = new BigInteger(sc.next());
        
        Hola h = new Hola(t1, t2);
        
        int n = sc.nextInt();
        BigInteger resultadoxd=h.fibonacci(n);
        System.out.println( resultadoxd);
        

	}
}


class Hola {
    private BigInteger t1, t2;
    private Map<Integer, BigInteger> fibo = new HashMap<Integer,BigInteger>();;
    
    public Hola(BigInteger t1, BigInteger t2) {
        this.t1 = t1;
        this.t2 = t2;
        
    }
       

    public BigInteger fibonacci(int n) {
        if (n == 1) {
            return t1;
        } else if (n == 2) {
            return t2;
        }
    
        if(fibo.containsKey(n)) {
            return fibo.get(n);
        }
    
        BigInteger result = fibonacci(n-2).add(fibonacci(n-1).multiply(fibonacci(n-1)));

        fibo.put(n, result);
        return result;
    }
}
    