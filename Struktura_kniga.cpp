/* ������������ ������ �2 (������� �21)
 * ������� �3
 * ������� ������ "�����" (�����, �����). ������� �� ����� ����� ��������� ������.*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp7
{
    struct Book     //������ ��������� ��� �������� ���� � �� �������
    {
        public string name;     //������ ��� ������
        public string book;     //������ ��� �������� �����

        public void InputInfo()     //������� ����� 1�� ��������� ������������ ����
        {
            Console.WriteLine("������� ��� ������: ");
            name = (Console.ReadLine());
            Console.WriteLine("������� �������� �����: ");
            book = (Console.ReadLine());
            Console.WriteLine("------------------------");
        }
        public void OutputInfo()    //������� ������ 1�� ���������� ������������ ����
        {
            Console.WriteLine($"��� ������: {name}  �����: {book}");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            int s = 0;
            Console.WriteLine("������� �3: ������� ������ ����� (�����, �����).������� �� ����� ����� ��������� ������.");
            Console.WriteLine("----------------------------------------------------------------------------------------");
            Console.WriteLine("������� ���� �� ������ ������: ");

            int x = Convert.ToInt32(Console.ReadLine());        //��������� � ��� �������� ���������� ���� + �������

            Book[] mas = new Book[x];       //������ ������ ������������ ����

            Console.WriteLine("---------------------------------------------");
            Console.WriteLine($"������� {x} ������� � ��������������� �����!");
            Console.WriteLine("---------------------------------------------");

            for (int i = 0; i < x; i++)
            {
                mas[i].InputInfo();     //��������� ��� �������� (� ����) ����� + ������
            }

            Console.WriteLine("����� ������ ������ �� ������ �����:");      //������ �� ���������
            string select = (Console.ReadLine());                           //��������� ��� �������� ������ � ���������� select
            Console.WriteLine("------------------------------------");

            for (int i = 0; i < x; i++)     //�������� �� ���������
            {
                if (mas[i].name == select)  //���� ��� ������ i-�� ����� ��������� � �������
                {
                    mas[i].OutputInfo();    //������� ��� �����
                    s++;                    //������������� ������� ��������� ����
                }
            }
            if (s == 0)         //���� ������� ���� ����� 0
            {
                Console.WriteLine("���� ������ ������ �� �������!");    //������� ��������� �� �������� ���� ������� ������
            }
            Console.ReadKey();
        }
    }
}

