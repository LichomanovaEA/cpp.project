/* ������������ ������ �2
 * ������� �2
 * � ������������ �������� ������� �������� 3�4 ����������� ��������� ��� �������� ��������� �� ��������.*/

using System;

namespace ConsoleApp5
{
    class Program
    {
        static void Main(string[] args)
        {
            //-------------------------------------------------------------------------------------------
            //  ���� ���������� ����������
            int[,] mas = new int[3, 4];             //���������� ���������� ������� 3 �� 4
            int temp;                               //��������� ���������� ��� �������� �������� ��� ����������

            //  ���� ����� ������ � �������
            //-------------------------------------------------------------------------------------------
            Console.WriteLine("������� �2: � ������������ �������� ������� �������� 3�4 ����������� ��������� ��� �������� ��������� �� ��������.");
            Console.WriteLine("------------------------------------------------------------------------------------------------------------------");
            Console.WriteLine("������� ������ (12 ��������� ����� ������): ");

            for (int i = 0; i < 3; i++)     //���� ���������� ������ � ������� � ��������� ������
            {
                for (int j = 0; j < 4; j++)
                {
                    mas[i, j] = int.Parse(Console.ReadLine());      //������� Parse ��������� ������ �� ������ �������� �� ��������
                }
            }
            //-------------------------------------------------------------------------------------------
            //  ���� ������ ��������� ������ �� �������
            Console.WriteLine("---------------------------------");
            Console.WriteLine("����� ������������������ �������:");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    Console.Write($"{ mas[i, j]} ");
                }
                Console.WriteLine();
            }
            //-------------------------------------------------------------------------------------------
            //  ���� ���������
            for (int i = 0; i < 3; i++)     //���� ���������� ������� �� ���� �������
            {
                for (int j = 0; j < 4 - 1; j++)     //������ ������ �� ��������
                {
                    for (int k = j + 1; k < 4; k++)     //������ ������� ��� ��� �� �����, ������� � ������� ����� �������� ��������
                    {                                   //��� ���������� ���������
                        if (mas[i, j] < mas[i, k])      //����������, ���� ����� ������ ������� ��������
                        {
                            temp = mas[i, j];           //����� ������ ���������� temp
                            mas[i, j] = mas[i, k];      //������ �������
                            mas[i, k] = temp;
                        }
                    }
                }
            }
            //  ���� ������ ������ �� �������
            //-------------------------------------------------------------------------------------------
            Console.WriteLine("-------------------------------");
            Console.WriteLine("����� ���������������� �������:");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 4; j++)
                {
                    Console.Write($"{ mas[i, j]} ");
                }
                Console.WriteLine();
            }
            Console.ReadKey();
        }
    }
}



