#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3880152307U;
unsigned short var_9 = (unsigned short)65262;
short var_14 = (short)-2223;
unsigned int var_16 = 13380067U;
int zero = 0;
unsigned char var_19 = (unsigned char)201;
unsigned long long int var_20 = 6255773354838733387ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
