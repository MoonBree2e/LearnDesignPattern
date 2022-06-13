class SplitterFactory{
public:
    ISplitter* CreateSplitter(){
        return new ISplitter(); 
        return new BinaryFileSplitter();
    }
}

    virtual ISplitter* CreateSplitter() = 0;

};

class ISplitter{
    public:
    virtual void split() = 0;
    virtual ~ISplitter(){}
};

class BinaryFileSplitter : public ISplitter
{
public:
    void split(){
        //...
    }
};

class TxtSplitter  : public ISplitter
{

};

class PictureSplitter : public ISplitter
{

};

class VideoSplitter : public ISplitter
{

};

//具体的工厂
class BinarySplitterFactory : public SplitterFactory
{
public:
    virtual ISplitter* CreateSplitter(){
            return new BinaryFileSplitter();
    }
}

class TxtSplitterFactory : public SplitterFactory
{
public:
    virtual ISplitter* CreateSplitter(){
            return new TxtSplitter();
    }
}

class PictureSplitterrFactory : public SplitterFactory
{
public:
    virtual ISplitter* CreateSplitter(){
            return new PictureSplitter();
    }
}

class MainForm
{
    SplitterFactory* factory;
public:
    MainForm(SplitterFactory* factory){
        this->factory = factory;
    }
    void Button1_Click(){
        ISplitter* splitter = factory->CreateSplitter();
        splitter->split();
    }
}