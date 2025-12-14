#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3175;
unsigned short var_1 = (unsigned short)51832;
int var_2 = 1305889034;
_Bool var_4 = (_Bool)1;
int var_9 = 802256441;
long long int var_12 = 8789706294056335336LL;
_Bool var_14 = (_Bool)0;
unsigned short var_18 = (unsigned short)47185;
int zero = 0;
unsigned int var_19 = 761911960U;
int var_20 = 1748357930;
long long int var_21 = 1637879813896632888LL;
unsigned int var_22 = 2811781043U;
signed char var_23 = (signed char)92;
int var_24 = 2091099396;
short arr_0 [13] [13] ;
signed char arr_1 [13] ;
_Bool arr_2 [13] ;
short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)17770;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-6888;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
