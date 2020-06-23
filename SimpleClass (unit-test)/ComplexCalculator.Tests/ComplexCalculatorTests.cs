using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace ComplexCalculator.Tests
{
    [TestClass]
    public class ComplexCalculatorTests
    {
        [TestMethod]
        public void Test_Constructor()
        {
            {
                Complex a = new Complex();
                Assert.AreEqual(0, a.Re);
                Assert.AreEqual(0, a.Im);
            }

            {
                Complex a = new Complex(5, -7);
                Assert.AreEqual(5, a.Re);
                Assert.AreEqual(-7, a.Im);
            }

            Console.WriteLine("Test_Constructor OK\n");
        }

        [TestMethod]
        public void Test_Plus_Operator()
        {
            {
                Complex a = new Complex(5, 10);
                Complex b = new Complex(3, -5);
                Complex c = a + b;

                Assert.AreEqual(8, c.Re);
                Assert.AreEqual(5, c.Im);
            }

            {
                Complex a = new Complex(5, 10);
                Complex c = a + 3.5f;

                Assert.AreEqual(8.5f, c.Re);
                Assert.AreEqual(10, c.Im);
            }

            {
                Complex a = new Complex(5, 10);
                Complex c = -2.5f + a;

                Assert.AreEqual(2.5f, c.Re);
                Assert.AreEqual(10, c.Im);
            }

            Console.WriteLine("Test_Plus_Operator OK\n");
        }

        [TestMethod]
        public void Test_Minus_Operator()
        {
            {
                Complex a = new Complex(5, 10);
                Complex b = new Complex(3, -5);
                Complex c = a - b;

                Assert.AreEqual(2, c.Re);
                Assert.AreEqual(15, c.Im);
            }

            {
                Complex a = new Complex(5, 10);
                Complex c = a - 2.5f;

                Assert.AreEqual(2.5, c.Re);
                Assert.AreEqual(10, c.Im);
            }

            {
                Complex a = new Complex(5, 10);
                Complex c = 2.5f - a;

                Assert.AreEqual(-2.5, c.Re);
                Assert.AreEqual(10, c.Im);
            }

            Console.WriteLine("Test_Minus_Operator OK\n");
        }

        [TestMethod]
        public void Test_Miltiply_Operator()
        {
            {
                Complex a = new Complex(5, 10);
                Complex b = new Complex(3, -5);
                Complex c = a * b;

                Assert.AreEqual(65, c.Re);
                Assert.AreEqual(5, c.Im);
            }

            {
                Complex a = new Complex(5, 10);
                Complex c = a * 2.5f;

                Assert.AreEqual(12.5, c.Re);
                Assert.AreEqual(25, c.Im);
            }

            {
                Complex a = new Complex(5, 10);
                Complex c = -2.5f * a;

                Assert.AreEqual(-12.5, c.Re);
                Assert.AreEqual(-25, c.Im);
            }

            {
                Complex a = new Complex(5, 10);
                Complex c = a * 0;

                Assert.AreEqual(0, c.Re);
                Assert.AreEqual(0, c.Im);
            }

            Console.WriteLine("Test_Multiply_Operator OK\n");
        }

        [TestMethod]
        public void Test_Division_Operator()
        {
            {
                Complex a = new Complex(13, 1);
                Complex b = new Complex(7, -6);
                Complex c = a / b;

                Assert.AreEqual(1, c.Re);
                Assert.AreEqual(1, c.Im);
            }

            {
                Complex a = new Complex(13, 1);
                Complex c = a / -5.0f;

                Assert.AreEqual(-2.6f, c.Re);
                Assert.AreEqual(-0.2f, c.Im);
            }

            {
                Complex a = new Complex(2, 4);
                Complex c = 4.2f / a;

                Assert.AreEqual(0.42f, c.Re);
                Assert.AreEqual(-0.84f, c.Im);
            }

            Console.WriteLine("Test_Division_Operator OK\n");
        }

        [TestMethod]
        public void Test_GetAbs()
        {
            {
                Complex a = new Complex(4, 2);
                Assert.AreEqual(4.47213f, a.GetAbs());
            }

            {
                Complex a = new Complex(4, 0);
                Assert.AreEqual(4, a.GetAbs());
            }

            {
                Complex a = new Complex(0, 4);
                Assert.AreEqual(4, a.GetAbs());
            }

            {
                Complex a = new Complex(0, 0);
                Assert.AreEqual(0, a.GetAbs());
            }

            Console.WriteLine("Test_GetAbs OK\n");
        }

        [TestMethod]
        public void Test_GetArg()
        {
            {
                Complex a = new Complex(4, 2);
                Assert.AreEqual(0.46363997f, a.GetArg());
            }

            {
                Complex a = new Complex(4, 0);
                Assert.AreEqual(0, a.GetArg());
            }

            {
                Complex a = new Complex(0, 4);
                Assert.AreEqual(1.5707899f, a.GetArg());
            }

            {
                Complex a = new Complex(0, 0);
                Assert.AreEqual(0, a.GetArg());
            }

            Console.WriteLine("Test_GetArg OK\n");
        }
    }
}
