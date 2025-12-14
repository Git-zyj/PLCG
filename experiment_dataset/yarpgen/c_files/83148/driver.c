#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)116;
unsigned char var_9 = (unsigned char)132;
int zero = 0;
unsigned long long int var_14 = 15058138276418279851ULL;
unsigned long long int var_15 = 3709870938795452951ULL;
unsigned short var_16 = (unsigned short)34171;
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
