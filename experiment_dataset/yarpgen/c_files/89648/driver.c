#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1434117513U;
long long int var_5 = -8880616388289784692LL;
unsigned short var_6 = (unsigned short)31587;
signed char var_7 = (signed char)10;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2312345282U;
unsigned int var_11 = 3189783676U;
unsigned int var_14 = 1886749215U;
unsigned char var_15 = (unsigned char)248;
int zero = 0;
unsigned char var_16 = (unsigned char)45;
signed char var_17 = (signed char)99;
int var_18 = -288374107;
long long int var_19 = -2969985895648556805LL;
signed char var_20 = (signed char)122;
int var_21 = -1714152464;
signed char var_22 = (signed char)-16;
unsigned char var_23 = (unsigned char)108;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
unsigned long long int arr_2 [24] [24] ;
int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 14377876794892526663ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 18428719083376400839ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 530559611018865625ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 19720908;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
