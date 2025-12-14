#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2288297375U;
long long int var_8 = -7633562087618883922LL;
short var_9 = (short)29850;
short var_17 = (short)-11751;
int zero = 0;
unsigned char var_19 = (unsigned char)92;
int var_20 = 389081925;
unsigned long long int var_21 = 1571004221677844605ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
