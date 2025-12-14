#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)24748;
int var_6 = -914813968;
unsigned long long int var_8 = 6894165446763779874ULL;
int zero = 0;
unsigned long long int var_12 = 9361405313544283694ULL;
short var_13 = (short)20339;
unsigned int var_14 = 2255111671U;
short var_15 = (short)-1184;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
