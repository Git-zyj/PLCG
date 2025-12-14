#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12911736378018414758ULL;
short var_8 = (short)31371;
unsigned long long int var_9 = 14070467278012565531ULL;
unsigned long long int var_10 = 16111555640021585535ULL;
short var_12 = (short)22693;
unsigned long long int var_14 = 2184848070727238645ULL;
unsigned long long int var_16 = 8535447836233880337ULL;
int zero = 0;
short var_18 = (short)-13652;
short var_19 = (short)-21709;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
