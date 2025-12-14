#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8285758839363969954ULL;
unsigned short var_7 = (unsigned short)44157;
signed char var_10 = (signed char)-116;
unsigned int var_13 = 1306693272U;
int var_14 = 410086071;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-16;
void init() {
}

void checksum() {
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
