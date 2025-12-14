#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11163;
unsigned short var_2 = (unsigned short)15752;
unsigned short var_4 = (unsigned short)61593;
signed char var_8 = (signed char)-9;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 562709749;
unsigned short var_17 = (unsigned short)39306;
long long int var_18 = 6333615066570543022LL;
unsigned long long int var_19 = 15637367560667482456ULL;
signed char var_20 = (signed char)30;
_Bool arr_3 [12] [12] ;
unsigned short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)9570;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
