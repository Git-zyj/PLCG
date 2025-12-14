#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1365931905;
unsigned short var_4 = (unsigned short)39315;
signed char var_8 = (signed char)-9;
long long int var_9 = -4184096704870994427LL;
int zero = 0;
int var_17 = 1376853929;
int var_18 = -1907951802;
long long int var_19 = -832017441624686763LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
