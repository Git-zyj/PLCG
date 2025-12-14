#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)118;
unsigned int var_4 = 2554877147U;
unsigned short var_7 = (unsigned short)3680;
unsigned long long int var_8 = 11219110680996834188ULL;
unsigned long long int var_9 = 2687415522367787688ULL;
int zero = 0;
unsigned int var_11 = 1826076918U;
unsigned short var_12 = (unsigned short)50306;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
