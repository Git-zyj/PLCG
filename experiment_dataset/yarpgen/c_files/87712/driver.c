#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12717815701670130175ULL;
unsigned long long int var_3 = 8123117652047542622ULL;
unsigned short var_7 = (unsigned short)16542;
long long int var_8 = -4037587275721316190LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_15 = 2683803670032761273ULL;
unsigned int var_16 = 696076580U;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-24672;
_Bool var_20 = (_Bool)1;
long long int var_21 = -8829538386334296497LL;
long long int arr_1 [23] [23] ;
signed char arr_10 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 4498484745793769489LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-91;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
