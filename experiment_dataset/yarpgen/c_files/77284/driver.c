#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3979921348746960584LL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)22;
int var_5 = -118329346;
long long int var_6 = -8662565093658617740LL;
short var_7 = (short)-29822;
unsigned short var_8 = (unsigned short)5037;
long long int var_9 = 8237947918062755007LL;
short var_10 = (short)-25994;
int zero = 0;
unsigned long long int var_11 = 7115520199811489482ULL;
unsigned short var_12 = (unsigned short)4101;
unsigned char var_13 = (unsigned char)77;
short var_14 = (short)25380;
int var_15 = -398808008;
unsigned char var_16 = (unsigned char)84;
signed char arr_0 [22] ;
unsigned int arr_1 [22] ;
long long int arr_3 [22] ;
int arr_12 [23] ;
unsigned long long int arr_4 [22] [22] ;
int arr_5 [22] ;
unsigned char arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2422871220U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3587423665331407393LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -1400397120;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 5801607941048843029ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -1064837488;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)17;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
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
