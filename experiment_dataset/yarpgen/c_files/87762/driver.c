#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)40;
long long int var_12 = 3882826586869800546LL;
int var_15 = -480339096;
int zero = 0;
unsigned int var_19 = 3984768547U;
long long int var_20 = 8453332239328500326LL;
long long int var_21 = -2479676795759638850LL;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)20649;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
