#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40311;
unsigned char var_1 = (unsigned char)105;
signed char var_6 = (signed char)-117;
short var_10 = (short)-28460;
unsigned long long int var_16 = 16038406335105239922ULL;
int zero = 0;
int var_20 = -456559247;
int var_21 = 1474971460;
void init() {
}

void checksum() {
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
