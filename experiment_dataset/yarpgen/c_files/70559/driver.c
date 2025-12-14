#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = -4554846970428891599LL;
unsigned char var_6 = (unsigned char)124;
_Bool var_8 = (_Bool)1;
long long int var_10 = 1449838660408334196LL;
long long int var_13 = -5107289908726248575LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)34;
signed char var_17 = (signed char)-39;
unsigned long long int var_18 = 2132839483546942040ULL;
unsigned long long int var_19 = 5703218879877724816ULL;
unsigned int arr_1 [20] ;
unsigned int arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3976877396U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 2548159300U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
