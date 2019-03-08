package example2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class exmp2 {
   
	public enum Day {MON, TUE, WED, THU, FRI, SAT, SUN};
	public static String getString() throws IOException
	{
	InputStreamReader isr = new InputStreamReader(System.in);
	BufferedReader br = new BufferedReader(isr);
	String s = br.readLine();
	return s;
	}
	public static void main(String[] args) throws IOException {
		Day d = Day.MON;
		Day t = Day.valueOf("MON");
		String s = getString();
		
   /*	 Fruits fru;
		 Fruits app = new Fruits();
		 fru = app;
		 app.name = "apple";
		 System.out.println(fru.name);
		 */
		
	/*	readfile r = new readfile(); 
		String cap = "Apple"; cap= cap.toLowerCase();
		System.out.println(cap);
	   int k= (cap.charAt(0)-48)*10 + cap.charAt(1)-48;
	//	if(cap.compareTo("1254") == 0)
		System.out.println(k);
	//	r.opeen_file();
	//	r.read_file();
	//	r.close_file();  */
		
	}

	
}
