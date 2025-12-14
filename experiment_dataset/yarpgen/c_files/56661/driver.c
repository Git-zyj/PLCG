#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3439166893485230388ULL;
unsigned short var_3 = (unsigned short)53290;
int var_7 = -1559186323;
int var_16 = 816058746;
int zero = 0;
unsigned short var_18 = (unsigned short)59686;
unsigned char var_19 = (unsigned char)11;
int var_20 = -1443629666;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
