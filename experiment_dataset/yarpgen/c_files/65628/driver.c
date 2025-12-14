#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6321;
unsigned short var_14 = (unsigned short)37038;
long long int var_18 = -4428002798183750076LL;
int zero = 0;
short var_19 = (short)2048;
unsigned int var_20 = 334020949U;
unsigned char var_21 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
