#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-21;
unsigned int var_8 = 3313052741U;
unsigned int var_9 = 1137278051U;
signed char var_13 = (signed char)-100;
signed char var_14 = (signed char)-104;
int zero = 0;
short var_17 = (short)5860;
unsigned char var_18 = (unsigned char)235;
unsigned int var_19 = 1985179088U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
