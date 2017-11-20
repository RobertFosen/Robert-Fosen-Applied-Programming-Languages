import java.util.ArrayList;
import java.util.Set;
import java.util.Collections;
import java.util.HashSet;

public class container {
	ArrayList<String> places = new ArrayList<String>();
	
	public void addToList(String string) {
		places.add(string);
	}	
	public void printList() {
		Set<String> unique = new HashSet<String>(places);
		for (String key : unique) {
			System.out.println(key + ": " + Collections.frequency(places, key));
		}
	}
	

}