#include <iostream>

int main() {
    const int a = 1;
    const int b = 2;
    
    /*
     * ■Lambda式について
     * 
     * Lambda式の型は必ず「auto」とする。
     * ⇒コンパイラがユニークな型を持つため、全く同じ記述でも異なる型としてみなされるため。
     * 
     * [=]により、Lambda式外で宣言された変数が自動的にコピーされ、ラムダ式内で使用できるようになる。
     */
    auto add = [=](int c) { // 「[](int i) -> void」と同様だが、ラムダ式は型推論によりreturnの型を省略できる
        std::cout << "合計は" << a + b + c << "です。" << std::endl;
    };
    
    add(3);
}
