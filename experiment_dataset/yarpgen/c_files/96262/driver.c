#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 430477472U;
int var_4 = -492500990;
unsigned char var_7 = (unsigned char)86;
int var_9 = -1121681280;
int zero = 0;
long long int var_16 = -3357280392054121107LL;
short var_17 = (short)10790;
unsigned short var_18 = (unsigned short)47324;
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
