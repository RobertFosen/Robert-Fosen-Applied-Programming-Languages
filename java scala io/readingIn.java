import java.util.ArrayList;
import java.io.*;

public class readingIn extends container{
    public static void main(String[] args)throws Exception {
    	container container = new container();
		File file = new File("input.txt");
 
		BufferedReader br = new BufferedReader(new FileReader(file));
 
		String st;
		while ((st = br.readLine()) != null) {
		    String[] words = st.split(" ");
		    for(int i = 0; i < words.length; i++) {
		    	container.addToList(words[i]);
		    }
		}
		container.printList();
	}
}