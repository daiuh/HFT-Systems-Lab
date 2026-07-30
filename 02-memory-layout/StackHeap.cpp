#include <cstdio>

int global_var = 100; // 全局區 (.data)

void test_function() {
    int stack_var = 10; // 棧區 (Stack)

    // 用 new 在堆區 (Heap) 申請了一個 int 大小的空間，並將其地址賦給 heap_ptr
    // 注意：heap_ptr 這個指標變量本身在【棧區】，但它指向的內存空間在【堆區】！
    int* heap_ptr = new int(20);

    printf("棧區變量地址:   %p\n", &stack_var);
    printf("堆區內存地址:   %p\n", heap_ptr);

    delete heap_ptr; // 使用完畢，必須手動歸還堆區內存！
}

int main() {
    printf("全局區變量地址: %p\n", &global_var);
    test_function();
    return 0;
}