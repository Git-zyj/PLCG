#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -7394976138741140913LL;
_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-52;
signed char var_5 = (signed char)106;
unsigned short var_7 = (unsigned short)62271;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 5477606803935045265ULL;
unsigned int var_12 = 3609846053U;
unsigned long long int var_13 = 1497507611882888247ULL;
long long int var_14 = 6988870764109166960LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 6058392097491597488ULL;
long long int var_17 = 5058618641907455693LL;
_Bool var_18 = (_Bool)0;
long long int arr_0 [22] [22] ;
int arr_7 [22] [22] [22] [22] ;
unsigned int arr_13 [22] [22] ;
unsigned char arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -1870624630586540196LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 410916509;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = 1972404929U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)130;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
