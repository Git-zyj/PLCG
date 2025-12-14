#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41312;
unsigned short var_9 = (unsigned short)39493;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3864734322U;
unsigned int var_19 = 1164510125U;
unsigned long long int var_20 = 14292103358099676868ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
