using System;
using System.Linq;

class Program
{
    static void Main()
    {
        string[] months = { "June", "July", "May", "December", "January", "February", "March", "April", "August", "September", "October", "November" };

        Console.Write("¬ведите количество букв в мес€це (n): ");
        int n = Convert.ToInt32(Console.ReadLine()); // длина строки дл€ первого запроса

        // «апрос, выбирающий мес€цы с длиной строки равной n
        var query1 = months.Where(m = > m.Length == n);

        // «апрос, возвращающий только летние и зимние мес€цы
        var query2 = months.Where(m = > m == "June" || m == "July" || m == "August" || m == "December" || m == "January" || m == "February");

        // «апрос, вывод€щий мес€цы в алфавитном пор€дке
        var query3 = months.OrderBy(m = > m);

        // «апрос, подсчитывающий мес€цы, содержащие букву "u" и длиной имени не менее 4-х
        var query4 = months.Where(m = > m.Length >= 4 && m.Contains("u"));

        // ¬ывод результатов запросов
        Console.WriteLine("ћес€цы с длиной строки равной {0}:", n);
        foreach(var month in query1)
        {
            Console.WriteLine(month);
        }

        Console.WriteLine();

        Console.WriteLine("Ћетние и зимние мес€цы:");
        foreach(var month in query2)
        {
            Console.WriteLine(month);
        }

        Console.WriteLine();

        Console.WriteLine("ћес€цы в алфавитном пор€дке:");
        foreach(var month in query3)
        {
            Console.WriteLine(month);
        }

        Console.WriteLine();

        Console.WriteLine("ћес€цы, содержащие букву 'u' и длиной имени не менее 4-х:");
        foreach(var month in query4)
        {
            Console.WriteLine(month);
        }
    }
}
