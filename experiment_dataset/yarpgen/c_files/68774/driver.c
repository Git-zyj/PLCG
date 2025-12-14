#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)199;
unsigned int var_15 = 2380977860U;
int zero = 0;
long long int var_16 = 922169704047964078LL;
unsigned long long int var_17 = 7814716680129516778ULL;
unsigned long long int var_18 = 1073667122080516087ULL;
unsigned char var_19 = (unsigned char)70;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 6864772100572686857ULL;
unsigned char arr_0 [13] ;
unsigned int arr_2 [13] ;
_Bool arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 645886175U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
