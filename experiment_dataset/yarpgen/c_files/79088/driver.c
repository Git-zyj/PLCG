#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
unsigned long long int var_17 = 12656808800264738282ULL;
int zero = 0;
unsigned long long int var_18 = 16565982468602227068ULL;
unsigned int var_19 = 2093154527U;
unsigned long long int var_20 = 11330985039909003829ULL;
int var_21 = -331623376;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
