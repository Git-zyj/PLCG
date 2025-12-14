#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30620;
unsigned short var_2 = (unsigned short)412;
signed char var_4 = (signed char)18;
signed char var_7 = (signed char)-78;
signed char var_8 = (signed char)22;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-97;
unsigned long long int var_12 = 10345406840100225440ULL;
int var_13 = 1246342926;
signed char var_14 = (signed char)-28;
_Bool var_15 = (_Bool)1;
int arr_1 [22] ;
signed char arr_2 [22] [22] ;
signed char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1106263882;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)28;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
