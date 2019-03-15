# include <new>
using std::nothrow;

template <typename T>
Struct Stack
{
  Struct Noh
  {
    T elem;
    Noh *prox;
  };
  Noh *top;
  void inicializar()
  {
    top = nullptr;
  }
  bool empty ()
  {
    return top == nullptr;
  }
  bool empilhar(T e)
  {
    Noh *n = new(nothrow) Noh;
    if(n == nullptr) { return True; }
    n -> elem = e;
    n -> next = top;
    top = n;
    return false;
  }
  T desempilhar ()
  {
    Noh *n = top;
    top = top -> next;
    T e = n->elem;
    delete n;
    return e;
  }
};
    
