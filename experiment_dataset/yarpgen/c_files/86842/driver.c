#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)17458;
unsigned int var_2 = 1113670546U;
unsigned char var_3 = (unsigned char)28;
signed char var_4 = (signed char)-113;
long long int var_8 = 4759359800253233852LL;
int var_13 = -1876817437;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)2;
long long int var_16 = 1762484960963185701LL;
long long int var_17 = -6272600007333018902LL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)82;
int var_20 = -1281188749;
signed char var_21 = (signed char)113;
unsigned char var_22 = (unsigned char)69;
int var_23 = 1862905691;
long long int var_24 = -4009756010551370831LL;
short var_25 = (short)5388;
signed char arr_1 [23] ;
long long int arr_2 [23] ;
signed char arr_3 [23] [23] [23] ;
signed char arr_4 [23] [23] ;
unsigned long long int arr_5 [23] ;
short arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2996803903004657058LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 5591844841170979866ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-27460;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
