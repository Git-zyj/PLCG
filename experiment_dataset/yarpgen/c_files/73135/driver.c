#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 257761828;
short var_3 = (short)-1321;
short var_10 = (short)15985;
int var_11 = -830947771;
int zero = 0;
unsigned short var_16 = (unsigned short)36948;
unsigned short var_17 = (unsigned short)28830;
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
