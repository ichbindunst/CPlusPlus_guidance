#include <iostream>

class Log{

public: 

    // name some same type data as anothername
    // and this name will means this kind type of data
    // like here, Level mean int, which will automatically follow the data type in the enum
    enum Level // define this name of this enum as "Level" type
    {
        LevelError = 0, LevelWarning, LevelInfo 
        // the value of Warning and Info will automatical change into 1 and 2 respectively
    };

private:
    Level m_LogLevel = LevelInfo;

public:
    void SetLevel(Level level){
        m_LogLevel = level;
    }

    void Error(const char* message){
        if (m_LogLevel >= LevelError)
            std::cout << "[ERROR]:" << message << std::endl;   
    }

    void Warn(const char* message){
        if (m_LogLevel >= LevelWarning)
            std::cout << "[WARNING]:" << message << std::endl;   
    }

    void Info(const char* message){
        if (m_LogLevel >= LevelInfo)
            std::cout << "[INFO]:" << message << std::endl;   
    }
};

int main(int argc, char** argv){
    Log log;
    // enum is a namespace
    log.SetLevel(Log::LevelError);
    log.Warn("Hello");
    log.Error("Hello");
    log.Info("Hello");

    return 0;
}