#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2196986531U;
unsigned char var_2 = (unsigned char)11;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 3065841556141223422ULL;
unsigned long long int var_10 = 847635333285291753ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_17 = (short)16777;
unsigned long long int var_18 = 10418209983135184688ULL;
void init() {
}

void checksum() {
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
