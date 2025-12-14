#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 745628754U;
int var_5 = 1420258164;
int var_11 = -190188433;
int zero = 0;
short var_14 = (short)-24703;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 3689384710721003030ULL;
unsigned short var_17 = (unsigned short)24674;
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
