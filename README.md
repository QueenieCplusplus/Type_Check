# Type_Check
C++ 實作，很多方程式利用型別檢驗，檢視型別安全。

提供 code 額外進階的寫法如下：

    #include <iostream>

    bool goOn() {

        std:: cout << "Do You wanna go on? (y or n)\n"; // question isuued

        char answer = 0;
        std::cin >> answer;

        switch(answer) {
        
          case 'y':
              return true;
          
          case 'n':
              return false;
          
          default:
              cout << "I guess you are trying to say no.\n";
              return false;
        
        }

    }

    int main() {

        goOn();
        return 0;

    }
