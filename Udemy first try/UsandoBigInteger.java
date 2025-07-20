import java.math.BigInteger;

public class UsandoBigInteger {
    public static void main(String args[]){
        int a=30;
        int b=67;

        BigInteger A=BigInteger.valueOf(33);
        BigInteger B=BigInteger.valueOf(3256325);
        int c=B.intValue(); // converts BI to int
        BigInteger C=new BigInteger("145862586245863258625");
        BigInteger X=new BigInteger("145862586245863258625");

        //constants
        BigInteger D=BigInteger.TEN;

        //addition
        BigInteger s=A.add(B);
        System.out.println(s);

        //multiplicar
        BigInteger m=C.multiply(X);

        //restar
        BigInteger sub=C.subtract(X);

        //dividir
        BigInteger d=B.divide(X);

        //remaining
        BigInteger REM=C.remainder(X);

        if (C.compareTo(X)<0){
            System.out.println("Yes");
        }
        System.out.println(d);
    }
}
