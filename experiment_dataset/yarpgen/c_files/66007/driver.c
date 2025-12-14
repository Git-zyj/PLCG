#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_4 = (short)28297;
unsigned long long int var_5 = 5408777113140560686ULL;
_Bool var_6 = (_Bool)1;
long long int var_8 = -8504417748126953224LL;
int var_9 = 2020129625;
unsigned long long int var_13 = 14352237461065863298ULL;
int var_14 = -1594875389;
int zero = 0;
signed char var_17 = (signed char)-33;
signed char var_18 = (signed char)-71;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)50668;
long long int arr_0 [15] [15] ;
int arr_1 [15] ;
unsigned short arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 4671308050241911605LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 942198165;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)21166;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
