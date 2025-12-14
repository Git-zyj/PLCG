#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)13461;
unsigned char var_13 = (unsigned char)65;
long long int var_14 = 6857419427672388212LL;
int zero = 0;
unsigned int var_16 = 3240726053U;
unsigned long long int var_17 = 14746731773794553236ULL;
unsigned long long int var_18 = 4238602100877411406ULL;
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
