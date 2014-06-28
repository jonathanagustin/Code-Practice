public class interview1_1
{
    public static void main (String[] args)
    {

         
        
        System.out.println(""+isUniqueChars2(args[0]));

        

    }

  //this is a function that returns whether or not 
  //a given string contains doubles
  public static boolean isUniqueChars2(String str)
  {
    //simple optimization
    //of course, if there are more characters than
    //unique characters, then there is a repeat character
    if(str.length() > 256) return false;

    //for each character in the ASCII set, have a boolean value
    //that holds whether the character has been already
    //iterated upon. The value is true if iterated upon already.
    boolean[] char_set = new boolean[256];


    for(int i = 0; i < str.length(); i++)
    {
        int val = str.charAt(i);
        
        //always false if the first instance
        if(char_set[val])
        {
            return false;
        }

        char_set[val] = true;
    }

   return true;
   }
}
