#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 2397792729U;
int var_6 = 1882100654;
int var_11 = 1263638837;
long long int var_12 = 5008162945593519137LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3231497439U;
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
