#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9054;
signed char var_4 = (signed char)-20;
unsigned char var_6 = (unsigned char)32;
long long int var_10 = 3768795029596140200LL;
int zero = 0;
unsigned long long int var_15 = 6670304541889883185ULL;
unsigned short var_16 = (unsigned short)27079;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
