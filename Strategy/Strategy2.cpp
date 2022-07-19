class TaxStrategy{
public:
    virtual double Calculate(const Context& context) = 0;
    virtual ~TaxStrategy(){}
};

// 多个类应该放在多个.cpp中
class CNTax : public TaxStrategy{
public:
    virtual double Calculte(const Context& context){
        //******
    }
};

class USTax : public TaxStrategy{
public:
    virtual double Calculte(const Context& context){
        //******
    }
};

class DETax : public TaxStrategy{
public:
    virtual double Calculte(const Context& context){
        //******
    }
};

class SalesOrder{
private:
    TaxStrategy* strategy;
public:
    SalesOrder(StrategyFactory* strategyFactory){
        this->strategy = strategyFactory->NewStrategy();
    }
    ~SalesOrder(){
        delete this->strategy;
    }
    public double CalculateTax(){
        //...
        Context context();
        double val = 
            strategy->Calculate(context);
        //...
    }
};

class FRTax : public TaxStrategy{
public:
    virtual double Calculte(const Context& context){
        //******
    }
};