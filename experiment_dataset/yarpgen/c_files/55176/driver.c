#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 2109243137;
unsigned long long int var_4 = 2456527637825695061ULL;
int var_6 = -1531413731;
unsigned short var_7 = (unsigned short)45175;
unsigned long long int var_9 = 12940227592685768646ULL;
unsigned short var_11 = (unsigned short)34148;
signed char var_14 = (signed char)58;
short var_15 = (short)23942;
long long int var_16 = -8734235917444905155LL;
short var_17 = (short)-14017;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-13;
int var_21 = 978045357;
signed char var_22 = (signed char)93;
unsigned char var_23 = (unsigned char)82;
short var_24 = (short)-24184;
short arr_0 [23] [23] ;
short arr_2 [23] [23] [23] ;
unsigned char arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31752;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)25930;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)91;
}

void checksum() {
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
