#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18257396309354359510ULL;
unsigned long long int var_1 = 10520862107437812303ULL;
unsigned long long int var_2 = 554185201587787770ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)21364;
unsigned char var_11 = (unsigned char)19;
unsigned char var_12 = (unsigned char)67;
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
