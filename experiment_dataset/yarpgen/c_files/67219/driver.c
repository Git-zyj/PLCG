#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -243439247;
unsigned int var_7 = 1483101458U;
short var_13 = (short)-29428;
int zero = 0;
unsigned long long int var_15 = 4573076272251153079ULL;
unsigned int var_16 = 46065879U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
