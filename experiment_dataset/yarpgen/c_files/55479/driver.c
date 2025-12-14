#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -830969843;
unsigned long long int var_3 = 16411802293682277528ULL;
int var_6 = 1450465162;
unsigned short var_7 = (unsigned short)44772;
short var_8 = (short)19642;
short var_9 = (short)-18611;
int var_10 = 260174663;
int zero = 0;
short var_11 = (short)21741;
unsigned int var_12 = 1539357665U;
unsigned int var_13 = 1917617027U;
unsigned int var_14 = 3988621383U;
unsigned short var_15 = (unsigned short)64305;
signed char arr_0 [10] ;
long long int arr_2 [10] [10] ;
_Bool arr_4 [10] [10] [10] ;
int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 9176410141715937836LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 298495965;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
