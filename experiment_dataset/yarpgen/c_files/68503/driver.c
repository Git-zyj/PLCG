#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
unsigned char var_1 = (unsigned char)80;
unsigned long long int var_4 = 13930770551956062739ULL;
int var_7 = 1333382506;
unsigned short var_10 = (unsigned short)47388;
short var_11 = (short)-18764;
int zero = 0;
unsigned long long int var_13 = 5689293432201779331ULL;
int var_14 = -12056822;
unsigned long long int var_15 = 14780109234516447773ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
