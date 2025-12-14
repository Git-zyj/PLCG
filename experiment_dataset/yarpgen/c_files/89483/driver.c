#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)12072;
_Bool var_12 = (_Bool)1;
int var_14 = -1009449367;
int zero = 0;
unsigned long long int var_16 = 13328269298422204857ULL;
unsigned short var_17 = (unsigned short)33489;
int var_18 = 1717603716;
signed char var_19 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
