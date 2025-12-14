#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1136977671;
long long int var_3 = 5115776374458491392LL;
unsigned int var_4 = 2448582989U;
int var_5 = 1636718695;
unsigned char var_6 = (unsigned char)3;
long long int var_9 = 5950295712193579632LL;
int var_11 = -301245469;
int zero = 0;
signed char var_13 = (signed char)104;
unsigned int var_14 = 3327539577U;
unsigned int var_15 = 3969722909U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
