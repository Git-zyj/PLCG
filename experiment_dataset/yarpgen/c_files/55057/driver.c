#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7416449774495736827ULL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-46;
unsigned long long int var_8 = 8302687372940999171ULL;
signed char var_10 = (signed char)77;
unsigned int var_11 = 3797124569U;
unsigned int var_12 = 3573562853U;
int zero = 0;
unsigned char var_13 = (unsigned char)102;
unsigned short var_14 = (unsigned short)48511;
int var_15 = -1040361754;
short var_16 = (short)27038;
short var_17 = (short)13375;
unsigned int var_18 = 1707325155U;
unsigned char arr_0 [22] [22] ;
unsigned long long int arr_1 [22] [22] ;
unsigned int arr_3 [22] ;
unsigned char arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 7391235651641287340ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3559179941U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)154;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
