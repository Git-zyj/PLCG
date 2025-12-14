#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1364367155;
signed char var_1 = (signed char)51;
unsigned long long int var_2 = 5247634277847359681ULL;
signed char var_3 = (signed char)-65;
signed char var_4 = (signed char)76;
unsigned char var_5 = (unsigned char)48;
signed char var_7 = (signed char)-65;
short var_8 = (short)30917;
short var_11 = (short)-2863;
short var_12 = (short)14733;
unsigned long long int var_15 = 6734476867291529746ULL;
unsigned short var_16 = (unsigned short)4276;
int zero = 0;
short var_17 = (short)-368;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 2721083888811836358ULL;
short var_20 = (short)1712;
long long int var_21 = -6770304792171479830LL;
unsigned short var_22 = (unsigned short)42092;
int arr_4 [18] ;
_Bool arr_10 [18] [18] [18] [18] ;
unsigned char arr_2 [10] ;
signed char arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -1078107730;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)134 : (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)111 : (signed char)32;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
