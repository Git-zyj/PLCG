#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8310926400978954212ULL;
short var_5 = (short)-16642;
unsigned short var_8 = (unsigned short)14044;
int var_11 = -848379120;
int var_14 = -1452447049;
int zero = 0;
unsigned long long int var_17 = 17647851565567097045ULL;
int var_18 = -126819554;
void init() {
}

void checksum() {
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
