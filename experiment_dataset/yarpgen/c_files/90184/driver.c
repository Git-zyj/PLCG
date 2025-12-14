#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7313757423263636738LL;
short var_6 = (short)-10286;
unsigned int var_8 = 1907425298U;
signed char var_11 = (signed char)55;
signed char var_14 = (signed char)-57;
int zero = 0;
unsigned char var_16 = (unsigned char)228;
unsigned int var_17 = 2132473046U;
short var_18 = (short)23758;
void init() {
}

void checksum() {
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
