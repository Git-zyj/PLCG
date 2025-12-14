#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26930;
unsigned long long int var_1 = 13072550293319738050ULL;
signed char var_3 = (signed char)58;
signed char var_5 = (signed char)-84;
signed char var_8 = (signed char)125;
signed char var_10 = (signed char)106;
unsigned short var_12 = (unsigned short)45022;
unsigned char var_13 = (unsigned char)36;
int zero = 0;
unsigned short var_14 = (unsigned short)61487;
unsigned long long int var_15 = 15610655754465404170ULL;
unsigned long long int var_16 = 2570880123179577216ULL;
unsigned long long int var_17 = 14461020068969645052ULL;
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
