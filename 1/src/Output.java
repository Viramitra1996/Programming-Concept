import java.util.*; 
public class Output{

            public static void main(String args[]){    
            Set<Integer> set=new TreeSet<>();  //creating TreeSetof Employee Object
            set.add(24);
            set.add(12);
            set.add(3);
            set.add(5);
            set.add(1);
            set.add(20);
            set.add(15);
            set.add(45);
            set.add(24);
            System.out.println(set);
            
            Map<Integer, String > map=new LinkedHashMap<>();
            map.put(101, "abc");
            map.put(105, "xyz");
            map.put(103, "klm");
            map.put(104, "opq");
            map.put(102, "pqr");
            map.put(106, "abc");
            System.out.println(map);
            
            } 

        }