#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17224423288808523599ULL;
long long int var_7 = 8970229067702671269LL;
long long int var_13 = 2416045834521024457LL;
unsigned long long int var_14 = 4827513525850798957ULL;
int zero = 0;
long long int var_18 = -5682226086602624069LL;
unsigned short var_19 = (unsigned short)37294;
unsigned int var_20 = 173226998U;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 17985341937535244625ULL;
long long int var_23 = 7657813449776958473LL;
signed char var_24 = (signed char)114;
unsigned char arr_0 [25] ;
signed char arr_5 [22] [22] ;
_Bool arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
