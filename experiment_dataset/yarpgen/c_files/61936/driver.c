#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10170981993932403095ULL;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)39521;
signed char var_4 = (signed char)6;
unsigned int var_5 = 2625728080U;
int var_6 = 607068527;
long long int var_7 = -2420513716620015956LL;
unsigned long long int var_8 = 5026007150978624345ULL;
short var_9 = (short)-27174;
unsigned short var_10 = (unsigned short)19625;
unsigned long long int var_12 = 12031861490967842957ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)23248;
unsigned int var_15 = 1575102876U;
unsigned int var_16 = 3559279802U;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 6649964041010663909ULL;
unsigned short var_20 = (unsigned short)21224;
unsigned int var_21 = 2765553180U;
unsigned long long int var_22 = 2976625914041398588ULL;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)48447;
_Bool var_25 = (_Bool)1;
long long int var_26 = 598573157865509171LL;
_Bool arr_0 [21] ;
unsigned char arr_2 [21] ;
unsigned short arr_3 [21] ;
_Bool arr_4 [21] ;
_Bool arr_5 [21] ;
_Bool arr_7 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)49038;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
