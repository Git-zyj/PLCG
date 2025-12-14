#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7367030718559899128LL;
int var_1 = 1257968852;
unsigned int var_3 = 403316353U;
signed char var_7 = (signed char)127;
int var_8 = 244986353;
signed char var_9 = (signed char)67;
int var_11 = 1355065883;
unsigned int var_12 = 3770832560U;
int zero = 0;
unsigned int var_15 = 1951797157U;
unsigned char var_16 = (unsigned char)119;
unsigned short var_17 = (unsigned short)48901;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
