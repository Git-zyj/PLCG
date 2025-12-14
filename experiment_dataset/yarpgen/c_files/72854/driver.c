#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6314806160472664511LL;
unsigned char var_3 = (unsigned char)117;
short var_8 = (short)29687;
unsigned int var_11 = 3985495326U;
unsigned char var_14 = (unsigned char)63;
int zero = 0;
unsigned char var_16 = (unsigned char)61;
unsigned int var_17 = 2496464066U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
