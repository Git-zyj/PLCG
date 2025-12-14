#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8742538032230605407ULL;
signed char var_1 = (signed char)-90;
short var_4 = (short)6407;
signed char var_9 = (signed char)-12;
short var_10 = (short)-2536;
unsigned int var_12 = 1553503670U;
unsigned char var_13 = (unsigned char)222;
int zero = 0;
short var_14 = (short)21115;
unsigned char var_15 = (unsigned char)3;
unsigned char var_16 = (unsigned char)51;
unsigned short var_17 = (unsigned short)9095;
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
