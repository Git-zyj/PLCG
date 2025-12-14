#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1551899978;
unsigned short var_5 = (unsigned short)61876;
long long int var_6 = 8759681521101704685LL;
signed char var_7 = (signed char)46;
int var_11 = 1938423897;
int zero = 0;
unsigned short var_13 = (unsigned short)2452;
int var_14 = 679037272;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
