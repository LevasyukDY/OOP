using System;

namespace SimpleClass
{
    class Program
    {
        static void Main(string[] args)
        {
            Complex a = new Complex
            {
                Re = 5,
                Im = 7
            };

            Complex b = new Complex
            {
                Re = 10,
                Im = 4
            };

            Complex c = a + b;

            Console.WriteLine($"Operation: ({a.Re} + i{a.Im}) + ({b.Re} + i{b.Im})");
            Console.WriteLine($"Result: Re = {c.Re} Im = {c.Im}");
            Console.WriteLine("Absolute Value: " + c.GetAbs());
            Console.WriteLine("Argument: " + c.GetArg() + "\n");

            Console.ReadKey();
        }
    }
}
