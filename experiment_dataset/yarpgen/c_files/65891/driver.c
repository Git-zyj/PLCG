#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3792688204948158282ULL;
int var_6 = 518282089;
long long int var_11 = 2547216586749442686LL;
signed char var_13 = (signed char)-48;
unsigned short var_14 = (unsigned short)41551;
short var_15 = (short)9884;
int zero = 0;
unsigned int var_17 = 3165063235U;
short var_18 = (short)30268;
unsigned int var_19 = 2107441159U;
int var_20 = 1051424214;
long long int var_21 = -1599860924496801834LL;
long long int var_22 = 3909034279700111641LL;
_Bool arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
