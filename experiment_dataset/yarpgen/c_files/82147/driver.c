#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16812837360495377129ULL;
short var_2 = (short)12290;
signed char var_6 = (signed char)77;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-80;
signed char var_10 = (signed char)71;
unsigned long long int var_11 = 6810416939799214841ULL;
int zero = 0;
short var_13 = (short)18073;
unsigned int var_14 = 2321089905U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
