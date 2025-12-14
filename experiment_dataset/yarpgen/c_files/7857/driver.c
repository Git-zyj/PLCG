#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2607071375U;
long long int var_3 = -1342918708710376472LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 18342009303083966572ULL;
signed char var_6 = (signed char)-108;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)103;
unsigned int var_10 = 2002162881U;
signed char var_11 = (signed char)-122;
signed char var_12 = (signed char)74;
unsigned long long int var_13 = 7441143774041589767ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -4697643912522083183LL;
short var_17 = (short)5265;
unsigned long long int arr_2 [13] ;
signed char arr_3 [13] ;
int arr_4 [13] [13] ;
short arr_6 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 5197125373501980706ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 534338664 : 1314006931;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-15610 : (short)3896;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
