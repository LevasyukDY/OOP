using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Text.RegularExpressions;

namespace ComplexCalculator
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private void String2Complex(String str, ref Complex num)
        {
            Regex regex = new Regex(@"\d*\,?\d+[+|-]\d*\,?\d+i");
            if (!regex.IsMatch(str))
            {
                ResultLabel.Text = "Некорректные данные";
                return;
            }

            String n1 = null, n2 = null;
            Boolean minus_sign = false;
            int i, index = 0, first_index = 0;

            if (str[0] == '-' || str[0] == '+')
            {
                n1 += str[0];
                first_index = 1;
            }

            for (i = first_index; i < str.Length; i++)
            {
                if (str[i] == '+' || str[i] == '-')
                {
                    num.Re = Convert.ToSingle(n1);
                    minus_sign = (str[i] == '-') ? true : false;
                    index = i + 1;
                    break;
                }
                n1 += str[i];
            }

            if (minus_sign)
            {
                n2 = "-";
            }

            for (i = index; i < str.Length; i++)
            {
                if (str[i] == 'i')
                {
                    num.Im = Convert.ToSingle(n2);
                    break;
                }
                n2 += str[i];
            }

        }

        private void CalculateButton_Click(object sender, EventArgs e)
        {
            Complex left_num = new Complex();
            String2Complex(LeftNumber.Text, ref left_num);

            Complex right_num = new Complex();
            String2Complex(RightNumber.Text, ref right_num);

            if (!(ResultLabel.Text == "Некорректные данные"))
            {
                Complex res = new Complex();

                if (ActionList.Text == "Сложить")
                {
                    res = left_num + right_num;
                }
                else if (ActionList.Text == "Вычесть")
                {
                    res = left_num - right_num;
                }
                else if (ActionList.Text == "Умножить")
                {
                    res = left_num * right_num;
                }
                else if (ActionList.Text == "Поделить")
                {
                    res = left_num / right_num;
                }
                if (res.Im >= 0)
                    ResultLabel.Text = res.Re.ToString() + "+" + res.Im.ToString() + "i";
                else
                    ResultLabel.Text = res.Re.ToString() + res.Im.ToString() + "i";

                ArgumentLabel.Text = res.GetArg().ToString();
                ModuleLabel.Text = res.GetAbs().ToString();

                LeftNumArgLabel.Text = left_num.GetArg().ToString();
                LeftNumModuleLabel.Text = left_num.GetAbs().ToString();

                RightNumArgLabel.Text = right_num.GetArg().ToString();
                RightNumModuleLabel.Text = right_num.GetAbs().ToString();
            }
            
        }
    }
}
