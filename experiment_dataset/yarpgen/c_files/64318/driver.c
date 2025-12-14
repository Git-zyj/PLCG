#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)32241;
unsigned long long int var_12 = 16260208160033138854ULL;
unsigned int var_16 = 382599481U;
int zero = 0;
signed char var_20 = (signed char)7;
unsigned int var_21 = 1373466418U;
void init() {
}

void checksum() {
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
