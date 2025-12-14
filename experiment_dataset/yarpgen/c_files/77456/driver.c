#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)25986;
int var_9 = 1000943523;
unsigned int var_13 = 3461832558U;
unsigned int var_14 = 2135579040U;
unsigned long long int var_15 = 7864389422640604921ULL;
int zero = 0;
short var_16 = (short)-18366;
short var_17 = (short)17929;
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
