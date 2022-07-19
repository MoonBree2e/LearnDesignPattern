enum TaxBase{
    CN_Tax,
    US_Tax,
    DE_Tax
};

class SalerOrder{
    TaxBase tax;
public:
    double CalculateTax(){
        //...

        if(tax == CN_Tax){
            //CN******
        }
        else if (tax == US_Tax){
            //US******
        }
        else if (tax == DE_Tax){
            //DE******
        }

        //...
    }
};