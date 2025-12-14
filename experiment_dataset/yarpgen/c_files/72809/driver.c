#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3734;
short var_2 = (short)-7125;
short var_4 = (short)-700;
unsigned short var_6 = (unsigned short)40832;
unsigned long long int var_11 = 13305685184577792306ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)61032;
short var_14 = (short)217;
short var_15 = (short)10055;
unsigned long long int var_16 = 11234452472811735604ULL;
unsigned int var_17 = 1328792026U;
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
