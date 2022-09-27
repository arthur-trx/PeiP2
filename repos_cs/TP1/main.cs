namespace TP1
{
    class Program
    {
        static void Main()
        {
            int larguer;
            int longueur;
            Console.WriteLine("Calcul de la surface d'un rectangle");
            Console.WriteLine("veuillez rentrer la largeur");
            largeur = Console.ReadLine();
            Console.WriteLine("veuillez rentrer la longueur");
            longueur = Console.ReadLine();
            int surface = largeur * longueur;
            Console.WriteLine(surface);


        }
  }
}