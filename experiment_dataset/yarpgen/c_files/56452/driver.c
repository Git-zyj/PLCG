#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 52054013U;
unsigned long long int var_5 = 11879259422003332881ULL;
int var_7 = 1710314195;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-65;
signed char var_15 = (signed char)34;
short var_16 = (short)-9822;
unsigned long long int var_17 = 7156362283578640761ULL;
long long int var_18 = -7298497759632836437LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
