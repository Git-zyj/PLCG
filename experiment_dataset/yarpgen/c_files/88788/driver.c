#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13958;
signed char var_5 = (signed char)55;
signed char var_7 = (signed char)-109;
signed char var_12 = (signed char)74;
unsigned char var_13 = (unsigned char)63;
int zero = 0;
int var_16 = 1446680442;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-2840;
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
