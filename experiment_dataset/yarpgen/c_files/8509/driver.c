#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3132938652U;
unsigned long long int var_5 = 4375110055561147618ULL;
unsigned int var_6 = 2174676004U;
unsigned char var_8 = (unsigned char)120;
int var_12 = -1169497826;
unsigned char var_15 = (unsigned char)178;
int zero = 0;
int var_17 = -1594642969;
short var_18 = (short)-27944;
long long int var_19 = 2593188190165045559LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
