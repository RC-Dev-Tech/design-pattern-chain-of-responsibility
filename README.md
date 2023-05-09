# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Chain of Responsibility 責任鏈模式  
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 目的
Chain of Responsibility模式的目的是將請求的發送者和接收者解耦，使多個物件都有機會處理請求。<br>
這種模式為請求的發送者和接收者之間建立一條鏈，將請求沿著這條鏈傳遞，直到有一個物件處理它為止。

---

## 使用時機
當需要避免請求的發送者和接收者之間的耦合關係時，可以使用Chain of Responsibility模式。<br>
另外，當多個物件可以處理同一個請求時，可以使用這種模式。

---

## URL結構圖
![](https://drive.google.com/uc?id=1LPblDiCj6Qee0-82vRdYN-RcUZIDOgOb)
> 圖片來源：[Refactoring.Guru - Chain of Responsibility](https://refactoring.guru/design-patterns/chain-of-responsibility)

---

## 實作成員
* Handler
  * 聲明處理請求的介面。
* ConcreteHandler
  * 實現Handler介面，並且如果可以處理請求，就處理它；否則，就將請求傳遞給下一個處理程序。
* Client
  * 創建ConcreteHandler物件的請求。

---

## 實作範例:
- [待補...]() 

---

## 參考資料
* [Wiki - Chain of Responsibility Pattern](https://en.wikipedia.org/wiki/Chain-of-responsibility_pattern) <br>
* [Refactoring.Guru - Chain of Responsibility](https://refactoring.guru/design-patterns/chain-of-responsibility) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
