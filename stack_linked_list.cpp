# include <new>
using std::nowthrow;
template <typename T>
struct Stack
{
    struct Noh
    {
        T elem;
        Noh *next;
    };
    Noh *top;
    void initialize()
    {
        top = nullptr;
    }
    bool empty()
    {
        return top == nullptr;
    }
    bool empilhar(T e)
    {
        Noh *n = new(nothrow) Noh;
        if (n == nullptr)
        {
            return True;
        }
        n -> elem = e;
        n -> next = top;
        top = n;
        return False;
    }
    T desempilhar()
    {
        Noh *n = top;
        top = top -> next;
        T e = n -> elem;
        delete n;
        return e;
    }
    void finish()
    {
        while(!empty())
        {
            desempilhar();
        }
    }
}
    
