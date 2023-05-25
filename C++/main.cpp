/*
 * Design Pattern - Chain of Responsibility 責任鏈模式
 * 
 * 在這個範例中，Handler（處理程序）定義了一個處理請求的介面，並維護了一個指向下一個處理程序的指針（successor）。
 * ConcreteHandlerA、ConcreteHandlerB和ConcreteHandlerC分別是Handler的具體實現類，
 * 它們根據請求的特定條件來決定是否處理請求，如果無法處理則將請求傳遞給下一個處理程序。
 * 
 * 在客戶端中，我們創建了ConcreteHandlerA、ConcreteHandlerB和ConcreteHandlerC的實例，並通過調用SetSuccessor方法來設置它們之間的連接。
 * 然後，我們將一系列請求傳遞給ConcreteHandlerA，它將根據特定的條件進行處理或轉發。
 */

#include <iostream>

// Handler
class Handler {
protected:
    Handler* successor;

public:
    Handler() : successor(nullptr) {}

    void SetSuccessor(Handler* handler) {
        successor = handler;
    }

    virtual void HandleRequest(int request) = 0;
};

// ConcreteHandlerA
class ConcreteHandlerA : public Handler {
public:
    void HandleRequest(int request) override {
        if (request < 10) {
            std::cout << "execute - Request " << request << " handled by ConcreteHandlerA." << std::endl;
        }
        else if (successor != nullptr) {
            successor->HandleRequest(request);
        }
    }
};

// ConcreteHandlerB
class ConcreteHandlerB : public Handler {
public:
    void HandleRequest(int request) override {
        if (request >= 10 && request < 20) {
            std::cout << "execute - Request " << request << " handled by ConcreteHandlerB." << std::endl;
        }
        else if (successor != nullptr) {
            successor->HandleRequest(request);
        }
    }
};

// ConcreteHandlerC
class ConcreteHandlerC : public Handler {
public:
    void HandleRequest(int request) override {
        if (request >= 20) {
            std::cout << "execute - Request " << request << " handled by ConcreteHandlerC." << std::endl;
        }
        else if (successor != nullptr) {
            successor->HandleRequest(request);
        }
    }
};

int main() {
    ConcreteHandlerA handlerA;
    ConcreteHandlerB handlerB;
    ConcreteHandlerC handlerC;

    handlerA.SetSuccessor(&handlerB);
    handlerB.SetSuccessor(&handlerC);

    handlerA.HandleRequest(5);
    handlerA.HandleRequest(15);
    handlerA.HandleRequest(25);

    return 0;
}
