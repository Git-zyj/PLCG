#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)24908;
long long int var_7 = -1383487021431671977LL;
unsigned char var_14 = (unsigned char)182;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-126;
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
