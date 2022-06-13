class FileSplitter
{
public:
    void split(){
        //...
    }
};

class MainForm
{
public:
    void Button1_Click(){
        FileSplitter* splitter = new FileSplitter();
        splitter->split();
    }
}

class MainForm
{
public:
    void Button1_Click(){
        ISplitter* splitter = new BinaryFileSplitter();
        splitter->split();
    }
}