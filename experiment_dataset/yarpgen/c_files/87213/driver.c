#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17112636197284337408ULL;
unsigned int var_2 = 34954130U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 1632580824935281610ULL;
unsigned long long int var_17 = 13587032842099164282ULL;
void init() {
}

void checksum() {
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
