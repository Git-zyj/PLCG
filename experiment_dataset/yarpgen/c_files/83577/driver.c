#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)65409;
unsigned long long int var_9 = 18053377366895176568ULL;
unsigned int var_10 = 1785229124U;
short var_12 = (short)-31693;
int zero = 0;
unsigned long long int var_18 = 7368479402370736019ULL;
short var_19 = (short)760;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
