#ifndef ARDUINO_LIBRARY_BASE
#define ARDUINO_LIBRARY_BASE

#if ARDUINO < 100
  #include <WProgram.h>
#else
    #include <Arduino.h>
#endif

//--------이곳에 추가할 헤더파일들 혹은 매크로 상수들 -------


//생성할 객체

class ARDUINO_LIBRARY_BASE{
  public:
    ARDUINO_LIBRARY_BASE();
    
    //------ 이아래에 함수들 ------





  private:
    //외부에서 참조하지 못하는 변수나 함수를 이곳에 넣는다.
    
    
    
    
};


#endif
