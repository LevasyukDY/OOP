using System;
using System.Collections.Generic;
using System.Text;

namespace ComplexCalculator
{
    public class Complex
    {
        float re, im;

        public Complex() { re = 0; im = 0; } // Конструктор по-умолчанию

        public Complex(float r, float i) { re = r; im = i; } // Конструктор с параметрами

        // Действительная часть
        public float Re
        {
            get { return re; }
            set { re = value; }
        }

        // Мнимая часть
        public float Im
        {
            get { return im; }
            set { im = value; }
        }

        // Действия с комплексными числами
        public static Complex operator +(Complex a, Complex b)
            => new Complex(a.Re + b.Re, a.Im + b.Im);
        public static Complex operator -(Complex a, Complex b)
            => new Complex(a.Re - b.Re, a.Im - b.Im);
        public static Complex operator *(Complex a, Complex b)
            => new Complex(a.Re * b.Re - a.Im * b.Im, a.Re * b.Im + b.Re * a.Im);
        public static Complex operator /(Complex a, Complex b)
            => new Complex((a.Re * b.Re + a.Im * b.Im) / (b.Re * b.Re + b.Im * b.Im), 
                           (b.Re * a.Im - a.Re * b.Im) / (b.Re * b.Re + b.Im * b.Im));

        // Действия с левым действительным числом и правым комплексным
        public static Complex operator +(float a, Complex b)
            => new Complex(a + b.Re, b.Im);
        public static Complex operator -(float a, Complex b)
            => new Complex(a - b.Re, b.Im);
        public static Complex operator *(float a, Complex b)
            => new Complex(a * b.Re, a * b.Im);
        public static Complex operator /(float a, Complex b)
            => new Complex((a * b.Re) / (b.Re * b.Re + b.Im * b.Im),
                           (-a * b.Im) / (b.Re * b.Re + b.Im * b.Im));

        // Действия с левым комплексным и правым действительным числом
        public static Complex operator +(Complex a, float b)
            => new Complex(a.Re + b, a.Im);
        public static Complex operator -(Complex a, float b)
            => new Complex(a.Re - b, a.Im);
        public static Complex operator *(Complex a, float b)
            => new Complex(a.Re * b, a.Im * b);
        public static Complex operator /(Complex a, float b)
            => new Complex((a.Re * b) / (b * b), 
                           (b * a.Im) / (b * b));

        // Модуль комплексного числа - длина вектора, изображающего комплексное число
        public float GetAbs()
        {
            float result = (float)System.Math.Sqrt(this.Re * this.Re + this.Im * this.Im);
            result -= result % 0.00001f; // Точность до 5 знака после запятой
            return result;
        }

        // Аргумент комплексного числа (угол фи) в радианах
        public float GetArg()
        {
            float result = (float)System.Math.Atan2(this.Im, this.Re);
            result -= result % 0.00001f; // Точность до 5 знака после запятой
            return result;
        }

    }
}
