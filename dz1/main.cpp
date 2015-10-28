#include<iostream>
#include<math.h>
#include<fstream>


                double sina(double a=2.7,double b=3.1);



		double function (double );
		int numberofsteps(double,double,double);




		

		int factorial (int);



int main()      {

		//////////			ZADACHA1
				
                double x;
                double y;
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";
		std::cout<<"функция1 сумма синусов прямоугольного треугольника\n";
                std::cout<<"Введите больший катет или 0 по умолчанию\n";
                std::cin>>x;
                std::cout<<"Введите меньший катет или 0 по умолчанию\n";
                std::cin>>y;

                if (x<0 || y<0) {
                                std::cerr<<"ОШИБКА!Катеты не могут принимать отрицательные значения\n";
                               // return 1;
                                  }
                if (x==0 ^ y==0) {
                                std::cerr<<"ОЩИБКА!Один из катетов не может быть равен нулю\n";
                               // return 3;
                                 }

                if (x==0 && y==0) {
                                std::cout<<"сумма синусов="<<sina()<<'\n';
                                  }
                if (x!=0 && y!=0) {
                                  std::cout<<"сумма синусов="<<sina(x, y)<<'\n';
                }
		
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";
                



		///////////			ZADACHA2

     
                double Xstart;
                double Xend;
                double step;
                int i;

                std::ofstream out ("x_4+arctg(x)", std::ofstream::app);
                        out<<"x f(x)\n";
		

		std::cout<<"Функция2 значения функции х^4+arctg(x) на отрезке с заданным шагом с выводом в файл\n";
                std::cout<<"Введите начало отрезка\n";
                std::cin>>Xstart;
                std::cout<<"Введите конец отрезка\n";
                std::cin>>Xend;
                std::cout<<"Введите шаг\n";
                std::cin>>step;
                std::cout<<"Результат смотрите в файле \n";
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";
                std::cout<<" \n";

                i = numberofsteps(Xstart, Xend, step);
                int n=0;
                do {
                        out<<Xstart<<'\t'<<function(Xstart)<<'\n';
                        Xstart=Xstart + step;
                        n=n+1;
                   } while (n<=i);

                out.close();




		//////////			ZADACHA3


		
        	int N;
		std::cout<<"Функция3 двойной факториал числа\n";
        	std::cout<<"Введите натуральное число\n";
        	std::cin>>N;
        	std::cout<<"Двойной факториал введенного числа"<<factorial(N)<<'\n';

	


 return 0;
}

