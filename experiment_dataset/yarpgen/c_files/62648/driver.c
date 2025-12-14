#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
unsigned int var_1 = 93808344U;
unsigned short var_2 = (unsigned short)56857;
unsigned long long int var_3 = 5881217900462317675ULL;
long long int var_4 = -5153369102691699571LL;
unsigned long long int var_5 = 13977574887959344973ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)14323;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-41;
_Bool var_11 = (_Bool)0;
short var_12 = (short)4270;
signed char var_13 = (signed char)64;
unsigned short var_14 = (unsigned short)700;
unsigned short var_15 = (unsigned short)34211;
unsigned long long int arr_6 [11] ;
long long int arr_13 [23] ;
unsigned int arr_14 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 9658102082529912933ULL : 11364570809942861196ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -329557686772514059LL : 7376681174207957412LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 1460702829U : 4207891280U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
