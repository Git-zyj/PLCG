#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8438566144539297297LL;
short var_16 = (short)-23713;
int var_17 = -272284953;
unsigned int var_18 = 1757162168U;
int zero = 0;
unsigned long long int var_20 = 1509466574665843200ULL;
unsigned short var_21 = (unsigned short)39456;
unsigned short var_22 = (unsigned short)49458;
unsigned long long int var_23 = 16945407166286567840ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
