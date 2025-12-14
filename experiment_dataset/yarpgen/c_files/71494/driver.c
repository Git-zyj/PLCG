#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9019;
int var_3 = -1406360566;
unsigned char var_4 = (unsigned char)76;
long long int var_13 = -8553178898528181475LL;
int zero = 0;
unsigned short var_15 = (unsigned short)14413;
signed char var_16 = (signed char)-93;
unsigned long long int var_17 = 17831038923944467650ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
