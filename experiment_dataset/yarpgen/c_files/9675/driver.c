#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
int var_8 = 477688199;
short var_12 = (short)-12969;
long long int var_15 = -1780475238508423767LL;
int zero = 0;
short var_16 = (short)-5478;
unsigned short var_17 = (unsigned short)8565;
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
