#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2374045801U;
signed char var_3 = (signed char)-3;
unsigned int var_5 = 3632799387U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3590178607U;
unsigned char var_15 = (unsigned char)164;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int var_18 = 111904770;
unsigned char var_19 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
