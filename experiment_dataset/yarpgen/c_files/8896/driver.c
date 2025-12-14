#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 115180370U;
short var_5 = (short)9801;
short var_8 = (short)7634;
short var_9 = (short)2063;
int zero = 0;
short var_14 = (short)-2290;
unsigned int var_15 = 488674697U;
unsigned short var_16 = (unsigned short)45965;
long long int var_17 = -513168948244058384LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
