#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 537931828;
unsigned char var_8 = (unsigned char)32;
long long int var_10 = 383258885333058103LL;
unsigned char var_14 = (unsigned char)3;
int zero = 0;
unsigned int var_16 = 926425757U;
unsigned long long int var_17 = 6696126742682174719ULL;
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
