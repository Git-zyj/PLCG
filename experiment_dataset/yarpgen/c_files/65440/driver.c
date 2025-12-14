#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-19716;
long long int var_5 = 6116908194172260384LL;
unsigned long long int var_7 = 6124545833272218902ULL;
unsigned long long int var_10 = 9442432985124953280ULL;
unsigned short var_13 = (unsigned short)11814;
int zero = 0;
short var_15 = (short)-19595;
long long int var_16 = 1134285078089726833LL;
unsigned short var_17 = (unsigned short)10424;
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
