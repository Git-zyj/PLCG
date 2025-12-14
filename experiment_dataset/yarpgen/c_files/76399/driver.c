#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21143;
unsigned int var_1 = 2451878141U;
long long int var_2 = 2875882155512125481LL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)88;
unsigned int var_9 = 4139161304U;
int var_11 = 1878137668;
signed char var_12 = (signed char)104;
int zero = 0;
unsigned int var_15 = 2159251718U;
int var_16 = -1060694504;
short var_17 = (short)17100;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 2367637515714100034ULL;
signed char var_20 = (signed char)-102;
unsigned long long int var_21 = 18121584030130239822ULL;
signed char var_22 = (signed char)-113;
signed char var_23 = (signed char)-93;
unsigned int arr_0 [18] [18] ;
signed char arr_1 [18] ;
_Bool arr_8 [18] ;
unsigned long long int arr_14 [19] ;
signed char arr_16 [19] [19] ;
_Bool arr_2 [18] ;
long long int arr_9 [18] ;
unsigned long long int arr_13 [18] ;
unsigned int arr_17 [19] ;
unsigned long long int arr_18 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 3430668447U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 5677613589033242268ULL : 10600177988210629999ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-89 : (signed char)-75;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -6888423533901358630LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 14813009074793307811ULL : 12596174488884119904ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 405635796U : 1696096653U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 7813462525735089157ULL : 8710046678115254360ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
