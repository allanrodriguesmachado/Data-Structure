typedef int typeItem;
const int maxItems = 100;

class stack() {
    private:
      typeItem size;
      typeItem* structure;
      

    public:
        stack();
        ~stack();
        bool isEmpety();
        bool isFull();
        void push(typeItem item);
        typeItem pop();
        void printStack();
        typeItem length();
};