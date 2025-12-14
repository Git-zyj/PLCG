#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
long long int var_2 = -4801993803452707088LL;
unsigned int var_3 = 1072236063U;
unsigned int var_5 = 3125734153U;
short var_10 = (short)-11761;
int zero = 0;
signed char var_11 = (signed char)42;
long long int var_12 = -3182000160259266088LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
