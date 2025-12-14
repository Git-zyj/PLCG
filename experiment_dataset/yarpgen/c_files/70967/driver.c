#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37016;
unsigned int var_8 = 1418646344U;
int zero = 0;
unsigned long long int var_16 = 14052379588177039492ULL;
unsigned long long int var_17 = 4161348847780634286ULL;
unsigned int var_18 = 2030671623U;
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
