#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3809204120U;
unsigned int var_4 = 3817290639U;
unsigned int var_7 = 2513564486U;
unsigned int var_8 = 1711027372U;
unsigned int var_9 = 3977628511U;
unsigned int var_10 = 3956886006U;
int zero = 0;
unsigned int var_11 = 3810256956U;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
