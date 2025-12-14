#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31073;
long long int var_5 = 8887210089922510792LL;
signed char var_6 = (signed char)16;
unsigned int var_9 = 4140256031U;
int zero = 0;
unsigned char var_12 = (unsigned char)234;
unsigned short var_13 = (unsigned short)764;
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
