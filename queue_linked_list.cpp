# include <new>

using STD::NOTHROW;

template <typename T>

Struct Fila {
  Struct Noh {
    T elem; Noh *prox;
  }
  Noh *i, *f;
  
  Bool Vazia(){
    return i == nullptr;
  }
  
  void inicializar(){
    i = nullptr;
  }

  Bool enfilar(T e){
    Noh *n = new(nothrow) Noh;
    if(n == nullptr){
      return true;
    }
    n->elem = e;
    n->prox = nullptr;
    if(vazia()){
      i = n;
    }else {
      f->prox = n;
    }
    f = n;
    return false;
  }

  T desenfilar(){
    T e = i->elem;
    Noh *n = i;
    i = i->prox;
    delete n;
    return e;
  }

  void terminar(){
    while(!vazia()){
      desempilhar();
    }
  }
};













