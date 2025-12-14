#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)1;
long long int var_4 = -170463407047448400LL;
unsigned long long int var_5 = 17731803786505149948ULL;
unsigned long long int var_6 = 408181920381477484ULL;
unsigned long long int var_8 = 9571879092345427907ULL;
short var_9 = (short)-23082;
short var_11 = (short)5296;
long long int var_12 = -5610602436836893979LL;
unsigned long long int var_13 = 1758288559101284624ULL;
unsigned char var_14 = (unsigned char)77;
int zero = 0;
unsigned long long int var_15 = 13817856710689715808ULL;
unsigned char var_16 = (unsigned char)155;
int var_17 = 343970078;
long long int var_18 = -6833236391029494292LL;
unsigned long long int var_19 = 3839125392028431784ULL;
long long int var_20 = 230087603246386353LL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)79;
long long int arr_8 [20] [20] [20] ;
_Bool arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6735500206950398593LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
