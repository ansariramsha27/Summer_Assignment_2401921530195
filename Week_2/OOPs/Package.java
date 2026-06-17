package Music; // playable interface in Music package

public interface Playable
{
    void play();
}

//Veena class in Music.string package
package Music.string;
import Music.Playable;
public class Veena implements Playable
{
    public void play()
    {
        System.out.println("Veena is being played");
    }
}

//Saxophone class in Music.wind package
package Music.wind;
import Music.Playable;
public class Saxophone implements Playable
{
    public void play()
    {
        System.out.println("Saxophone is being played");
    }
}
//Live package
//test class inside live package
package live;
import Music.Playable;
import Music.string.Veena;
import Music.wind.Saxophone;
public class Test
{
    public static void main(String args[]){
        Veena v=new Veena();
        v.play();
        Saxophone s=new Saxophone();
        s.play();
        Playable p;
        p=v;
        p.play();
        p=s;
        p.play();
    }
}
