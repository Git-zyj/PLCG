#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3406918047U;
int var_1 = -1625543147;
unsigned short var_3 = (unsigned short)47212;
unsigned short var_11 = (unsigned short)35403;
_Bool var_13 = (_Bool)0;
long long int var_15 = 84530966910213637LL;
signed char var_16 = (signed char)76;
int zero = 0;
int var_17 = 123184046;
int var_18 = -1563297776;
unsigned int var_19 = 1889707143U;
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
