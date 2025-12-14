#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)54;
int var_2 = 2076200323;
unsigned short var_5 = (unsigned short)29073;
unsigned short var_6 = (unsigned short)59000;
signed char var_7 = (signed char)44;
unsigned short var_8 = (unsigned short)3353;
long long int var_9 = -6359940598345945409LL;
signed char var_12 = (signed char)-102;
unsigned long long int var_13 = 3277665659027530709ULL;
int var_14 = -1690738402;
unsigned long long int var_15 = 14271516816746288397ULL;
signed char var_16 = (signed char)-4;
int zero = 0;
signed char var_18 = (signed char)-104;
unsigned short var_19 = (unsigned short)52588;
_Bool arr_0 [10] ;
unsigned short arr_1 [10] ;
long long int arr_6 [20] ;
unsigned int arr_2 [10] ;
unsigned short arr_3 [10] ;
unsigned short arr_4 [10] [10] ;
short arr_8 [20] [20] ;
signed char arr_9 [20] ;
unsigned int arr_10 [20] ;
_Bool arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)19603;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -8762025095519525677LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 2770446766U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)61696;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)17281;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (short)2338;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 2298022647U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
