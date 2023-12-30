using System;
using System.Linq;

class Program
{
    static void Main()
    {
        string[] months = { "June", "July", "May", "December", "January", "February", "March", "April", "August", "September", "October", "November" };

        Console.Write("������� ���������� ���� � ������ (n): ");
        int n = Convert.ToInt32(Console.ReadLine()); // ����� ������ ��� ������� �������

        // ������, ���������� ������ � ������ ������ ������ n
        var query1 = months.Where(m = > m.Length == n);

        // ������, ������������ ������ ������ � ������ ������
        var query2 = months.Where(m = > m == "June" || m == "July" || m == "August" || m == "December" || m == "January" || m == "February");

        // ������, ��������� ������ � ���������� �������
        var query3 = months.OrderBy(m = > m);

        // ������, �������������� ������, ���������� ����� "u" � ������ ����� �� ����� 4-�
        var query4 = months.Where(m = > m.Length >= 4 && m.Contains("u"));

        // ����� ����������� ��������
        Console.WriteLine("������ � ������ ������ ������ {0}:", n);
        foreach(var month in query1)
        {
            Console.WriteLine(month);
        }

        Console.WriteLine();

        Console.WriteLine("������ � ������ ������:");
        foreach(var month in query2)
        {
            Console.WriteLine(month);
        }

        Console.WriteLine();

        Console.WriteLine("������ � ���������� �������:");
        foreach(var month in query3)
        {
            Console.WriteLine(month);
        }

        Console.WriteLine();

        Console.WriteLine("������, ���������� ����� 'u' � ������ ����� �� ����� 4-�:");
        foreach(var month in query4)
        {
            Console.WriteLine(month);
        }
    }
}
