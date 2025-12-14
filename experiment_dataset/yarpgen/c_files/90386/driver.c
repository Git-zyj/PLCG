#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5054948763468247043ULL;
long long int var_6 = 1687640808578104160LL;
long long int var_9 = 3929041286304027336LL;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-28;
int zero = 0;
short var_18 = (short)11922;
short var_19 = (short)-13109;
short var_20 = (short)26874;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
