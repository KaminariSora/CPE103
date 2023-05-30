using System;

namespace ConsoleApp3
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] scoreMath = { 30, 20, 10, 40, 50 };
            int[] scoreComputer = { 60, 70, 80, 90, 100 };
            Console.Write("Score Math :");
            displayScore(scoreMath);
            Console.Write("Score Computer :");
            displayScore(scoreComputer);
            Console.Write("Math Score Compare :");
            bubblesort(scoreMath);
            printArray(scoreMath);
            Console.Write("Computer Score Compare :");
            bubblesort(scoreComputer);
            printArray(scoreComputer);
        }
        static void displayScore(int []arr)
        {
            Console.Write("{");
            for(int i=0;i<arr.Length;i++)
            {
                Console.Write(arr[i]);
                if(i<arr.Length-1)
                {
                    Console.Write(",");
                }
            }
            Console.WriteLine("}");
        }

        private static int findMaxInArray(int[] arr)
        {
            int maxvalue = arr[0];//กำหนดค่าเริ่มต้น
            for(int i = 0; i < arr.Length; i++)
            {
                if (arr[i] > maxvalue)
                {
                    maxvalue = arr[i];
                }
            }
            return maxvalue;
        }

        static void bubblesort(int[] arr)
        {
            for(int i = 0; i < arr.Length; i++)//กำหนดขอบเขตลูปตามจำนวนarray
            {
                for(int j = 0; j < arr.Length - i - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        int value = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = value;
                    }
                }
            }
        }

        static void printArray(int[] arr)
        {
            for(int i = 0; i < arr.Length; i++)
            {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine();
        }
    }
}
