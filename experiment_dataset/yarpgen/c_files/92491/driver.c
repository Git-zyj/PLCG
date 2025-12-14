#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 11380903172984523001ULL;
int var_5 = 1217419952;
unsigned char var_6 = (unsigned char)92;
long long int var_7 = -5342470400515905833LL;
long long int var_8 = -5895147743083388512LL;
unsigned long long int var_9 = 1243179164985550092ULL;
long long int var_11 = 5177089147819562464LL;
unsigned char var_14 = (unsigned char)69;
int zero = 0;
int var_19 = -346915145;
unsigned short var_20 = (unsigned short)43315;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 12584040587769506120ULL;
signed char arr_1 [14] ;
_Bool arr_2 [14] [14] [14] ;
_Bool arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
