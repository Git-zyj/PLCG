#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 10900091066372271007ULL;
short var_9 = (short)-4439;
unsigned short var_10 = (unsigned short)58171;
int zero = 0;
unsigned long long int var_15 = 18110944916371320157ULL;
unsigned char var_16 = (unsigned char)135;
unsigned char var_17 = (unsigned char)19;
unsigned long long int var_18 = 14523776999965910121ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
