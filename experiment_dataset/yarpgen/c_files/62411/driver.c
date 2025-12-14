#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)113;
unsigned int var_2 = 1893753667U;
unsigned int var_4 = 1881799762U;
unsigned long long int var_5 = 2088859372045416539ULL;
unsigned long long int var_8 = 9111715534573634234ULL;
unsigned int var_11 = 3982171918U;
signed char var_18 = (signed char)37;
int zero = 0;
short var_20 = (short)-12641;
unsigned int var_21 = 4277062700U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
