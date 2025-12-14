#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8558313827651244428LL;
long long int var_3 = -348363691391251759LL;
signed char var_7 = (signed char)-19;
int var_12 = 1553513388;
int zero = 0;
unsigned long long int var_13 = 12953997608509661327ULL;
unsigned short var_14 = (unsigned short)59784;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
