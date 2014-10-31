#ifndef _MARKET_H_
#define _MARKET_H_

class Market{
  char[9] name;
  List cashiers;
  
  public:
    Market() : name("Vapt-vupt"){};
   ~Market(){};
};

#endif