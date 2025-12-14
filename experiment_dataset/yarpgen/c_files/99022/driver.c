#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28851;
unsigned long long int var_6 = 251997426100028971ULL;
unsigned short var_10 = (unsigned short)27796;
int zero = 0;
signed char var_12 = (signed char)118;
int var_13 = 1738373197;
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
