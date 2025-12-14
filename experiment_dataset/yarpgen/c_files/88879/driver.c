#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4172947790424602142LL;
short var_2 = (short)-26386;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3292849900U;
long long int var_5 = -626435680883668625LL;
signed char var_8 = (signed char)71;
long long int var_10 = -5563523545495281611LL;
int zero = 0;
unsigned long long int var_11 = 11368550642208170967ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 2528760748297643915ULL;
long long int var_14 = -7429573433943325412LL;
signed char var_15 = (signed char)63;
unsigned long long int var_16 = 9005176892870189012ULL;
signed char var_17 = (signed char)-49;
_Bool var_18 = (_Bool)1;
int arr_0 [16] [16] ;
unsigned short arr_2 [16] [16] [16] ;
_Bool arr_5 [16] ;
_Bool arr_11 [17] [17] [17] [17] ;
unsigned short arr_13 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 1543078521;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)63960;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)52279;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
