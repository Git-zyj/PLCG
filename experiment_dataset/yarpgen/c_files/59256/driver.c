#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1132078323U;
unsigned long long int var_1 = 8362555416929780926ULL;
int var_4 = -1532812443;
unsigned int var_9 = 2445616359U;
unsigned long long int var_10 = 14395787617585679408ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -2085350442800478895LL;
signed char var_13 = (signed char)110;
unsigned char var_14 = (unsigned char)28;
long long int var_15 = -238378949770744319LL;
int var_16 = -265300317;
unsigned int arr_1 [10] ;
unsigned char arr_2 [10] ;
long long int arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 538412489U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = -878300995950104100LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
