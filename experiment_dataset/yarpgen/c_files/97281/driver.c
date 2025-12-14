#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8429;
unsigned short var_4 = (unsigned short)56532;
unsigned short var_6 = (unsigned short)20775;
long long int var_10 = 5836415159858874731LL;
unsigned long long int var_12 = 16408550656150407511ULL;
unsigned long long int var_16 = 12609148417092241609ULL;
unsigned short var_18 = (unsigned short)30978;
int zero = 0;
short var_19 = (short)30100;
unsigned long long int var_20 = 6366885489240646101ULL;
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
