#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33537;
int var_5 = -1682934812;
unsigned long long int var_8 = 9452228793978749281ULL;
int zero = 0;
signed char var_10 = (signed char)-74;
unsigned short var_11 = (unsigned short)60936;
long long int var_12 = 2748550678629959015LL;
unsigned short var_13 = (unsigned short)24429;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
