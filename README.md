## 📦 Stack Implementation Using Vectors (C++)

Este projeto implementa uma estrutura de dados do tipo **pilha (stack)** utilizando vetores em C++. A pilha é uma estrutura LIFO (*Last In, First Out*), onde o último elemento inserido é o primeiro a ser removido.

---

### 🧠 Conceitos abordados

* Estrutura de dados **Stack (Pilha)**
* Vetores dinâmicos com `new`/`delete`
* Encapsulamento usando classes
* Operações básicas: `push`, `pop`, `isEmpty`, `isFull`, `length` e `print`

---

### 📁 Estrutura do Projeto

```
stack_implementation_using_vectors/
├── main.cpp       # Interface com o usuário
├── stack.cpp      # Implementação dos métodos da classe stack
├── stack.h        # Declaração da classe stack
└── README.md      # Este arquivo
```

---

### 🚀 Como compilar e executar

Use o `g++` para compilar:

```bash
g++ main.cpp stack.cpp -o main
./main
```

---

### 📌 Funcionalidades da Pilha

* `push(item)` → Insere um item no topo da pilha.
* `pop()` → Remove e retorna o item do topo.
* `isEmpty()` → Verifica se a pilha está vazia.
* `isFull()` → Verifica se a pilha atingiu o tamanho máximo.
* `length()` → Retorna a quantidade de elementos na pilha.
* `printStack()` → Exibe todos os elementos da pilha.

---

### 🛠 Exemplo de uso no `main.cpp`

```cpp
stack myStack;
myStack.push(10);
myStack.push(20);
myStack.printStack(); // Saída: 10 20
myStack.pop();
myStack.printStack(); // Saída: 10
```

---

### 📌 Limites

* Tamanho máximo da pilha: **100 elementos** (pode ser ajustado no código).
* Os elementos armazenados são do tipo `int`.
