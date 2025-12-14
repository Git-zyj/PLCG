#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7465745907385516962ULL;
int var_5 = 1834770161;
short var_16 = (short)14551;
int zero = 0;
int var_18 = -508566836;
unsigned char var_19 = (unsigned char)125;
unsigned char var_20 = (unsigned char)187;
unsigned int var_21 = 2681207837U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
