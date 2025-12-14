#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 184018187;
unsigned long long int var_6 = 4263366236543090152ULL;
int var_13 = -939652145;
int var_14 = 270472569;
int zero = 0;
unsigned short var_20 = (unsigned short)33726;
short var_21 = (short)-31536;
void init() {
}

void checksum() {
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
