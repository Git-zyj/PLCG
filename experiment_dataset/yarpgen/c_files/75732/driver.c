#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13696;
unsigned int var_6 = 754138620U;
unsigned long long int var_8 = 4505202342511976185ULL;
int var_9 = -234784122;
int zero = 0;
short var_10 = (short)5725;
short var_11 = (short)-12805;
unsigned short var_12 = (unsigned short)59289;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
