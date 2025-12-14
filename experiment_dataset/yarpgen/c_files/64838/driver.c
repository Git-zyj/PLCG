#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 3926620692U;
int var_5 = -1832951517;
short var_6 = (short)-22867;
_Bool var_7 = (_Bool)1;
short var_8 = (short)29259;
unsigned int var_9 = 274890915U;
long long int var_10 = -3514532214733918632LL;
unsigned int var_13 = 3516906255U;
short var_15 = (short)-8814;
int var_18 = 830647340;
int zero = 0;
short var_19 = (short)20126;
short var_20 = (short)20153;
short var_21 = (short)4766;
int var_22 = -590373975;
short var_23 = (short)-1697;
signed char var_24 = (signed char)-26;
int var_25 = 329199841;
int var_26 = 1813802937;
long long int var_27 = -1504179273568909742LL;
unsigned char var_28 = (unsigned char)134;
short arr_3 [23] ;
unsigned char arr_4 [23] [23] ;
short arr_7 [18] [18] ;
_Bool arr_2 [19] ;
unsigned char arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)15630;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)30224 : (short)-11385;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)229;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
