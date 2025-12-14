#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2047905035U;
int var_5 = -1137038356;
unsigned int var_7 = 474460523U;
unsigned long long int var_13 = 9245659862629617351ULL;
int zero = 0;
int var_15 = -1885004645;
int var_16 = 1678321702;
unsigned long long int var_17 = 12678409456736661579ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
