class IProgress
{
public:
    virtual void DoProgress(float value) = 0;
    virtual ~IProgress(){}
}

class FileSplitter
{
    string m_filePath;
    int m_fileNumber;
    // ProgressBar* m_progressBar; // 具体通知控件
    IProgress* m_iprogress; // 抽象通知机制
    vector<IProgress*> m_iprogressVector;
public:
    FileSplitter(const string& filePath, int fileNumber,
        ProgressBar* progressBar) :
    m_filePath(filePath), m_fileNumber(fileNumber),m_progressBar(progressBar){ }
    
    void add_IProgress(IProgress* iProgress)
    {
        m_iprogressVector.push_back(iProgress);
    }
    
    split()
    {
        //1.读大文件
        //2.分彼此向小文件中写入
        for(int i=0;i<m_fileNumber;++i){
            //...
            /*
            if(m_progressBar)
                m_progressBar->setValue((i+1)/m_fileNumber);
            */
            float progressValue = m_fileNumber;
            progressValue = (i+1) / progressValue;
            onProgress(progressValue);

        } 
    }
protected:
    virtual void onProgress(flaot value)
    {
        if(m_iprogress){
            m_iprogress->DoProgress(progressValue);
        }
    }
};

class ConsoleNotifier : public IProgress{
public:
    virtual void DoProgress(float value)
    {
        m_iprogress->DoProgress(value);
    }
};