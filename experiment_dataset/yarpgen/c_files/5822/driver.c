#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11497;
unsigned short var_5 = (unsigned short)5223;
short var_6 = (short)-4955;
int var_9 = 1187409316;
short var_10 = (short)-21684;
int zero = 0;
short var_13 = (short)22356;
unsigned short var_14 = (unsigned short)64402;
int var_15 = -209957432;
unsigned int var_16 = 3046355980U;
unsigned short var_17 = (unsigned short)14473;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
