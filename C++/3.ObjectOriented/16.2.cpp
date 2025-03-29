#include <iostream>

class Log
{
public:
enum Level
{
    LevelError = 0,LevelWarning = 1,LevelInfo = 2
}

private:
    Level m_LogLevel = Info;//限制在Level范围内
public:
    void Setlevel(Level level)
    {
        m_LogLevel = level;
    }
    void Error(const char* message)
    {
        if (m_LogLevel >= LevelError)
        std::cout << "[ERROR]: " << message << std::endl; 
    }
    void Warn(const char* message)
    {
        if (m_LogLevel >= LevelWarning)
        std::cout << "[Warning]: " << message << std::endl;
    }
    void Info(const char* message)
    {
        if (m_LogLevel >= LevelInfo)
        std::cout << "[INFO]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.Setlevel(Log::Error);// log类型（命名空间）里的Error类型。
    log.Warn("Hello!");
    log.Error("Hello!");
    log.Info("Hello!");
    std::cin.get();
}