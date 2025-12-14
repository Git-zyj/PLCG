#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)73;
long long int var_4 = 4630859410720689344LL;
long long int var_6 = 6937188132196321481LL;
long long int var_9 = 8445641564370626842LL;
int zero = 0;
long long int var_10 = -8582853353710573507LL;
unsigned int var_11 = 1671710601U;
signed char var_12 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
