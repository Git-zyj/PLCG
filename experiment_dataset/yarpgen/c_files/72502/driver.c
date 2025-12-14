#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6024286126758439723ULL;
unsigned long long int var_4 = 902154755652198840ULL;
unsigned char var_5 = (unsigned char)88;
unsigned char var_8 = (unsigned char)44;
int zero = 0;
unsigned long long int var_11 = 6581665312326432580ULL;
unsigned long long int var_12 = 8037001349427473060ULL;
unsigned char var_13 = (unsigned char)233;
void init() {
}

void checksum() {
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
