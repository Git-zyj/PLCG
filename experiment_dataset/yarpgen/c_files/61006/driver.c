#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3642137855U;
long long int var_3 = 7365809979418222452LL;
unsigned char var_7 = (unsigned char)203;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)37510;
unsigned int var_13 = 1105469204U;
long long int var_14 = -7048737366197307880LL;
_Bool var_15 = (_Bool)1;
unsigned int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1814819608U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
