#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
int var_1 = 163260781;
long long int var_2 = -586037060622377620LL;
signed char var_6 = (signed char)4;
unsigned int var_8 = 686930630U;
long long int var_9 = 185859156489210095LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
