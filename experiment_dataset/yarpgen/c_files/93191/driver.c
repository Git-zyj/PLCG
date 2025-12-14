#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9939169380296960123ULL;
unsigned short var_3 = (unsigned short)26469;
unsigned char var_6 = (unsigned char)131;
long long int var_7 = 6963665320195454245LL;
signed char var_8 = (signed char)92;
_Bool var_10 = (_Bool)1;
int var_12 = -552622122;
int zero = 0;
long long int var_13 = -4542242041975436282LL;
unsigned int var_14 = 2049418426U;
short var_15 = (short)-11336;
long long int var_16 = 549674946786913064LL;
unsigned char var_17 = (unsigned char)155;
int var_18 = 1366104385;
unsigned long long int arr_0 [11] ;
unsigned int arr_1 [11] ;
long long int arr_2 [11] ;
unsigned short arr_5 [19] ;
_Bool arr_3 [11] ;
short arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 6901475477608701396ULL : 7687827276481633105ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3774683316U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -5664770870241924237LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)39366;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (short)16644;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
