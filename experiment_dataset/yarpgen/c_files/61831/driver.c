#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5992246668261732325ULL;
signed char var_3 = (signed char)-79;
signed char var_4 = (signed char)73;
unsigned char var_8 = (unsigned char)219;
long long int var_13 = 5463211588090461262LL;
int zero = 0;
unsigned long long int var_15 = 6816806237888124874ULL;
unsigned char var_16 = (unsigned char)155;
long long int var_17 = 1126106717755457089LL;
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
