#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4064933630847516764ULL;
signed char var_4 = (signed char)46;
unsigned int var_5 = 442688320U;
int zero = 0;
unsigned int var_12 = 892232731U;
signed char var_13 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
