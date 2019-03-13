﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*
Autor: Alejandro Torre Reyes
Proceso: Calcular el Máximo Común Divisor entre 2 números enteros.
Entradas: 2 números enteros
Salidas: El MCD correspondiente
*/

namespace Ej30
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b;
            Console.WriteLine("Ingrese dos numeros enteros");
            a = Convert.ToInt32(Console.ReadLine());
            b = Convert.ToInt32(Console.ReadLine());

            while (a != b)
            {
                if (a > b)
                {
                    a = a - b;
                }
                else
                {
                    b = b - a;
                }
            }
            Console.WriteLine("MCD = {0}", a);
            Console.ReadKey();
        }
    }
}
/*
QA
Autor QA:Eyder Antonio Concha Moreno
Entradas: (8, 8), (7, 11), (200,100), (3, 1)
salidas:8, 1, 100, 1
Proceso :Ok, todo correcto.
*/