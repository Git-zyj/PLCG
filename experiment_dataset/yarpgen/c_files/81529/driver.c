#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)34;
signed char var_4 = (signed char)92;
unsigned long long int var_5 = 13316239173786439968ULL;
unsigned long long int var_7 = 6271331158491469485ULL;
int var_8 = 1981478749;
signed char var_10 = (signed char)2;
unsigned long long int var_11 = 364251607048723015ULL;
signed char var_13 = (signed char)-21;
short var_18 = (short)-29163;
int zero = 0;
short var_19 = (short)18883;
long long int var_20 = 2852031327755560086LL;
signed char var_21 = (signed char)7;
signed char var_22 = (signed char)126;
signed char var_23 = (signed char)-84;
signed char arr_2 [23] [23] ;
signed char arr_5 [23] [23] ;
signed char arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-23 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-101 : (signed char)120;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
