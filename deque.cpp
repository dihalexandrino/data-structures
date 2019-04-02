# include <new>
using std::nothrow;
template <typename T>
struct Deque
{
    struct Noh
    {
        T elem;
        Noh *prev;
        Noh *next;
    }
    Noh *left;
    Noh *right;
    bool empty()
    {
        return left == nullptr;
    }
    void initialize()
    {
        left == nullptr;
    }
    bool insert_left(T e)
    {
        Noh *n = new(nothrow) Noh;
        if (n == nullptr)
        {
            return true;
        }
        n -> elem = e;
        n -> prev = nullptr;
        if (empty())
        {
            n -> next = nullptr;
            right = n;
        }
        else
        {
            n -> next = left;
            left -> prev = n;
        }
        left = n;
        return false;
    }
    bool insert_right (T e)
    {
        Noh *n = new(nothrow) Noh;
        if (n == nullptr)
        {
            return true;
        }
        n -> elem = e;
        n -> next = nullptr;
        if(empty())
        {
            n -> prev = nullptr;
            left = n;
        }
        else{
            n -> prev = dir;
            right -> next = n;
        }
        right = n;
        return false;
    }
    T remove_left ()
    {
        T e = left -> elem;
        Noh *n = left;
        left = left -> next;
        if (!empty){
            left -> prev = nullptr;
        }
        delete n;
        return e;
    }
    T remove_right ()
    {
        T e = right -> elem;
        Noh *n = right;
        right = right -> prev;
        if (right != nullptr)
        {
            right -> next = nullptr;
        }
        else{
            left = nullptr;
        }
        delete n;
        return e;
    }
}
