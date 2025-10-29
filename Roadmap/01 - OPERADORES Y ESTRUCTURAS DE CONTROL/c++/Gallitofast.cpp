// #include <iomanip>
#include <iostream>
int main() {
  float a{10}, b{6};
  // float result;
  //  Operadores aritmeticos
  std::cout
      << "================================================================="
      << std::endl;
  std::cout << "Operadores aritmeticos" << std::endl;
  std::cout << "variable a vale: " << a << " Variable b vale : " << b
            << std::endl;
  std::cout << "Suma a +b: " << a + b << "\n";
  std::cout << "resta a-b: " << a - b << "\n";
  std::cout << "Multiplicacion de a*b: " << a * b << "\n";
  std::cout << "Division de a/b: " << a / b << "\n";
  std::cout << "Incremento de a" << a++ << std::endl;
  std::cout << "Decremento de a " << a-- << std::endl;
  // Operaciones de comparacion
  // estos resultados se imprimiran en booleanos, 0 es falso y 1 verdadero, o
  // usar la funcion de showbool
  std::cout
      << "================================================================="
      << std::endl;
  std::cout << "Comparadores" << std::endl;
  std::cout
      << "Los resultados booleanos por defecto se imprimen como 0=false y "
         "1=true (existe std::boolaplha para imprimirlos en alfanumerico)\n";
  std::cout << "igual a: (a==b)-->" << (a == b) << std::endl;
  std::cout << "desigual a: (a!=b)" << (a != b) << std::endl;
  std::cout << "Mayor que (a>b)" << (a > b) << std::endl;
  std::cout << "Menor que (a<b)" << (a < b) << std::endl;
  std::cout << "Mayor o igual que (a>=b)" << (a >= b) << std::endl;
  std::cout << "Menor o igual que (a<=b)" << (a <= b) << std::endl;

  std::cout
      << "================================================================="
      << std::endl;
  std::cout << "Operadores logicos\n";
  std::cout
      << "Los operadores logicos se representan asi; \nOR=|| \nAND=&& NOT=!"
      << std::endl;
  std::cout << "and sirve para juntar dos condiciones, como las siguientes:"
            << std::endl;
  std::cout << "a>5 %% b<<3: (" << (a > 5 && b < 3)
            << ") (Como las dos se cumplieron dan 1 que significa true)\n";
  std::cout
      << "Or da true si una de las condiciones da verdad como la siguiente:"
      << std::endl;
  std::cout << "a>15 (Falso) || b>2 (Verdadero): (" << (a > 15 || b > 1) << ")"
            << std::endl;
  std::cout << "Not invierte los valores, si es false da true y si es true da "
               "false\n";
  std::cout << "!a>5 (es true pero dara false por el not): (" << (!(a > 5))
            << ")" << std::endl;
  std::cout << "b>100 (es falso asi que dara true): (" << (!(b > 100)) << ")"
            << std::endl;

  std::cout
      << "================================================================="
      << std::endl;

  return 0;
}
