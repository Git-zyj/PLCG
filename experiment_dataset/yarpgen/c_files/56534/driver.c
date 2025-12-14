#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)38;
long long int var_6 = 7257281385638797669LL;
unsigned long long int var_7 = 3365374042889544919ULL;
unsigned char var_10 = (unsigned char)123;
long long int var_11 = 1450012923589682334LL;
long long int var_12 = -1957171454541894212LL;
unsigned short var_13 = (unsigned short)42929;
int zero = 0;
signed char var_18 = (signed char)103;
signed char var_19 = (signed char)-77;
short var_20 = (short)6829;
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
