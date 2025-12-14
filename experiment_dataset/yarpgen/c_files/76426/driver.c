#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
short var_6 = (short)17054;
long long int var_8 = 2611578118157662199LL;
unsigned short var_10 = (unsigned short)36253;
long long int var_13 = 1223709696402651138LL;
int zero = 0;
long long int var_14 = 1926099269201317511LL;
long long int var_15 = 1165743364182836207LL;
signed char var_16 = (signed char)70;
unsigned char var_17 = (unsigned char)219;
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
