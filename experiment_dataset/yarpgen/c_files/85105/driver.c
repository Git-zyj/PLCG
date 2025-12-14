#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9048998978319062892LL;
long long int var_2 = -6566607285510125359LL;
unsigned char var_7 = (unsigned char)252;
long long int var_12 = 8421325082291245211LL;
int zero = 0;
long long int var_13 = 8460326244875686978LL;
long long int var_14 = 8881347350652544738LL;
long long int var_15 = 6138944924591676286LL;
long long int arr_0 [17] ;
long long int arr_1 [17] ;
unsigned char arr_2 [17] ;
unsigned char arr_5 [17] [17] ;
long long int arr_6 [17] ;
unsigned char arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2063018680033467976LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 5882567105486891749LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 118421383617642297LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)48;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
