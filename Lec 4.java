public class Puppy {
    int PuppAge;
    public Puppy(string name)
    {
        system.out.println ("passed name is:"+name);
    }
    public void SetAge(int Age){
        PuppAge=Age;
    }
    public int getAge(){
        system.out.println("puppy age is:"+PuppAge);
        return PuppAge;
    }
    public static void main(string[] age){
        Puppy myPyppy = new Puppy ("Tommy");
        myPuppy.setAge (2);
        myPuppy.getAge();
        system.out.println("variable value is:"+myPuppy.PuppyAge);
    }
}