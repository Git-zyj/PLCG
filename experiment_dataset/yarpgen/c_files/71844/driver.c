#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14073;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 1046733281603065343ULL;
short var_4 = (short)12748;
unsigned long long int var_5 = 7802748303628712691ULL;
short var_8 = (short)26155;
short var_9 = (short)-21437;
int zero = 0;
unsigned char var_10 = (unsigned char)134;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)215;
short var_13 = (short)29795;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
