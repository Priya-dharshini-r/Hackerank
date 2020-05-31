import java.util.*;

class Player {
	String name;
	int score;

	Player(String name, int score) {
		this.name = name;
		this.score = score;
	}
}

class Checker implements Comparator<Player> {
  	// complete this method
	public int compare(Player a, Player b) {
  //using equal to operator to check score of a and b are same
        if(a.score==b.score){
        //comapreTo operator used
            return a.name.compareTo(b.name);
        }
        
     return b.score - a.score;
     /* if(a.score<b.score)
            return 1;
        if(a.score>b.score)
            return -1
            */
     
    }
   
}

