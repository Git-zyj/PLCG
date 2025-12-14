#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5249;
short var_2 = (short)12224;
_Bool var_4 = (_Bool)0;
long long int var_5 = 4496921675308623584LL;
short var_6 = (short)9192;
unsigned int var_7 = 2570023517U;
unsigned int var_9 = 2593346772U;
unsigned short var_11 = (unsigned short)11470;
unsigned short var_12 = (unsigned short)43237;
int zero = 0;
signed char var_13 = (signed char)31;
unsigned int var_14 = 3078522841U;
unsigned short var_15 = (unsigned short)39176;
unsigned short var_16 = (unsigned short)62213;
unsigned short arr_0 [19] ;
unsigned short arr_5 [18] ;
unsigned short arr_3 [19] [19] ;
short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37239 : (unsigned short)19856;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)60229;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)65033 : (unsigned short)33570;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)27406;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
