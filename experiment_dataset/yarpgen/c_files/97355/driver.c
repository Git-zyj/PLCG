#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 277822663142901200LL;
unsigned char var_13 = (unsigned char)70;
unsigned short var_15 = (unsigned short)27228;
int zero = 0;
unsigned long long int var_16 = 15457211753055841599ULL;
unsigned char var_17 = (unsigned char)36;
unsigned long long int var_18 = 12139123531580813555ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
