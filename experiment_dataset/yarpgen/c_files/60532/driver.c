#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1335069214U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 1668720025572940017ULL;
int zero = 0;
unsigned long long int var_16 = 14048426814330439461ULL;
short var_17 = (short)-1362;
short var_18 = (short)32109;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
