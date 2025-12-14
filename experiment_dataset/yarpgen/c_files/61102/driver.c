#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1719752597U;
signed char var_8 = (signed char)95;
unsigned long long int var_9 = 10769216465170218078ULL;
unsigned long long int var_13 = 15107917738380263391ULL;
int zero = 0;
int var_16 = -2101860579;
unsigned char var_17 = (unsigned char)181;
unsigned char var_18 = (unsigned char)37;
int var_19 = -135289662;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
