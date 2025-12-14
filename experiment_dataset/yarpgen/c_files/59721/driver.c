#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3429106442U;
unsigned int var_4 = 3153181011U;
unsigned long long int var_9 = 4286871887183291209ULL;
unsigned int var_13 = 2467297134U;
int zero = 0;
signed char var_14 = (signed char)-124;
unsigned int var_15 = 3051786705U;
unsigned int var_16 = 3826270000U;
unsigned long long int var_17 = 17168824489598197507ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
