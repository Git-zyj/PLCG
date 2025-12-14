#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)220;
short var_9 = (short)-24363;
long long int var_13 = -6276929179199453439LL;
int zero = 0;
signed char var_14 = (signed char)105;
unsigned char var_15 = (unsigned char)241;
unsigned char var_16 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
