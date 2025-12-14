#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
long long int var_1 = -1358299143843427575LL;
unsigned long long int var_2 = 3773785388609285805ULL;
short var_4 = (short)23197;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)49180;
unsigned short var_11 = (unsigned short)64073;
int zero = 0;
signed char var_12 = (signed char)-77;
signed char var_13 = (signed char)103;
unsigned char var_14 = (unsigned char)144;
unsigned short var_15 = (unsigned short)41065;
_Bool var_16 = (_Bool)0;
unsigned short arr_1 [19] [19] ;
unsigned char arr_2 [19] ;
unsigned short arr_5 [17] ;
_Bool arr_6 [17] ;
_Bool arr_3 [19] ;
_Bool arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)33939;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)48167;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
