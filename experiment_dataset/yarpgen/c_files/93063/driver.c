#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-17231;
long long int var_9 = 1141868083863207083LL;
unsigned char var_16 = (unsigned char)161;
int zero = 0;
unsigned char var_20 = (unsigned char)67;
unsigned short var_21 = (unsigned short)219;
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
