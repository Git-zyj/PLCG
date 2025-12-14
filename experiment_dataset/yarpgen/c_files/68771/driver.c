#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)67;
long long int var_4 = 3864730178420022195LL;
signed char var_7 = (signed char)78;
unsigned int var_8 = 538394278U;
signed char var_9 = (signed char)-104;
int zero = 0;
unsigned long long int var_12 = 10042604689378354415ULL;
unsigned char var_13 = (unsigned char)163;
unsigned int var_14 = 720724420U;
unsigned int var_15 = 1285069834U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned short arr_1 [23] ;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)45631;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2954254599U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
