#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1883481725654594412LL;
unsigned short var_2 = (unsigned short)47923;
int var_3 = 29388695;
int zero = 0;
unsigned char var_13 = (unsigned char)192;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
