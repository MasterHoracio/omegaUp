import java.util.Scanner;
import java.math.BigInteger;

class main{

	public static void main(String[] agrs){
		int N, A;
		Scanner sc = new Scanner(System.in);

		while(sc.hasNextInt()){

			N = sc.nextInt();
			A = sc.nextInt();

			BigInteger Bg = new BigInteger(Integer.toString(A));

			for(int i = 2; i <= N; i++)
				Bg = Bg.add( (new BigInteger(Integer.toString(A)).pow(i)).multiply(new BigInteger(Integer.toString(i)))  );
			
			System.out.println(Bg.toString());
		}
	}
}