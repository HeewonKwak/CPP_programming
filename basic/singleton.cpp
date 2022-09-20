class Singleton
{
public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    static Singleton& getInstance()
    {
        static Singleton instance;
        return instance;
    }
    void callFunction() {}

protected:
    Singleton() {}
    virtual ~Singleton() {}
};