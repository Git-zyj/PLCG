#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)30664;
long long int var_6 = 5521112676967394144LL;
short var_9 = (short)-23948;
long long int var_12 = 5569172667136731738LL;
unsigned short var_13 = (unsigned short)23189;
int zero = 0;
unsigned char var_15 = (unsigned char)91;
unsigned long long int var_16 = 223349764043945386ULL;
unsigned int var_17 = 115498852U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
