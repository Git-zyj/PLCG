#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10811534814359140878ULL;
long long int var_1 = -7833656480495527129LL;
unsigned short var_4 = (unsigned short)24986;
_Bool var_5 = (_Bool)0;
int var_7 = -1927317080;
long long int var_8 = 6515105505508878417LL;
int var_10 = 279239317;
int zero = 0;
unsigned long long int var_11 = 13514326658230416785ULL;
unsigned int var_12 = 3671699163U;
signed char var_13 = (signed char)90;
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
