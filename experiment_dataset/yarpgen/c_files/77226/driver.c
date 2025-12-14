#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17622820140544722872ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3717027922U;
int zero = 0;
unsigned long long int var_14 = 856120959165578927ULL;
signed char var_15 = (signed char)13;
signed char var_16 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
