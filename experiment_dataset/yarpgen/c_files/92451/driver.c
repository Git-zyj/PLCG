#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)83;
unsigned long long int var_9 = 12241742043396494299ULL;
unsigned int var_12 = 1021556837U;
signed char var_13 = (signed char)-11;
unsigned long long int var_14 = 12221450977081652754ULL;
int zero = 0;
short var_15 = (short)18579;
unsigned char var_16 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
