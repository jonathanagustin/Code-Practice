import java.util.HashMap;
import java.util.Scanner;

/**
 * Created by Jon on 3/18/16.
 * HashMap Practice
 */
public class HashMapPractice
{
    public static HashMap<Integer, Student> buildMap(Student[] students)
    {
    /* Initialize the map */
        HashMap<Integer, Student> map = new HashMap<Integer, Student>();

    /* Loop through students*/
        for (Student s : students)
        {
        /* make mapping */
            map.put(s.getId(), s);
        }

    /* return the map */
        return map;
    }


    public static void main(String[] args)
    {
        Student s1 = new Student(new Integer(1));
        Student s2 = new Student(new Integer(2));

        Student[] studentArray = new Student[2];
        studentArray[0] = s1;
        studentArray[1] = s2;

        HashMap<Integer, Student> map = new HashMap<Integer,Student>();
        map = buildMap(studentArray);

        System.out.println(map);
        System.out.println("Student 1 id is " + map.get(1).getId().toString());
        System.out.println("Student 2 id is " + map.get(2).getId().toString());

    }
}



