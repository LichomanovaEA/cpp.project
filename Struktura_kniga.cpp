/* Лабораторная работа №2 (Вариант №21)
 * Задание №3
 * Создать список "Книги" (Автор, Книга). Вывести на экран книги заданного автора.*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp7
{
    struct Book     //создаём структуру для хранения книг и их авторов
    {
        public string name;     //строка для автора
        public string book;     //строка для названия книги

        public void InputInfo()     //функция ввода 1ой перменной структурного типа
        {
            Console.WriteLine("Введите имя автора: ");
            name = (Console.ReadLine());
            Console.WriteLine("Введите название книги: ");
            book = (Console.ReadLine());
            Console.WriteLine("------------------------");
        }
        public void OutputInfo()    //функции вывода 1ой переменной структурного типа
        {
            Console.WriteLine($"Имя автора: {name}  Книга: {book}");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            int s = 0;
            Console.WriteLine("Задание №3: Создать список Книги (Автор, Книга).Вывести на экран книги заданного автора.");
            Console.WriteLine("----------------------------------------------------------------------------------------");
            Console.WriteLine("Сколько книг Вы хотите ввести: ");

            int x = Convert.ToInt32(Console.ReadLine());        //переенная х для хранения количества книг + авторов

            Book[] mas = new Book[x];       //создаём массив структурного типа

            Console.WriteLine("---------------------------------------------");
            Console.WriteLine($"Введите {x} авторов и соответствующие книги!");
            Console.WriteLine("---------------------------------------------");

            for (int i = 0; i < x; i++)
            {
                mas[i].InputInfo();     //считываем все введённые (х штук) книги + авторы
            }

            Console.WriteLine("Книги какого автора Вы хотите найти:");      //запрос на обработку
            string select = (Console.ReadLine());                           //считываем имя искомого автора в переменную select
            Console.WriteLine("------------------------------------");

            for (int i = 0; i < x; i++)     //проходим по структуре
            {
                if (mas[i].name == select)  //если имя автора i-ой книги совпадает с искомым
                {
                    mas[i].OutputInfo();    //выводим эту книгу
                    s++;                    //инкрементируём счётчик найденных книг
                }
            }
            if (s == 0)         //если счётчик книг равен 0
            {
                Console.WriteLine("Книг такого автора не нашлось!");    //выводим сообщения об отсутвии книг данного автора
            }
            Console.ReadKey();
        }
    }
}

