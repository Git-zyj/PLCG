#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38750;
signed char var_3 = (signed char)-55;
unsigned short var_5 = (unsigned short)32155;
unsigned long long int var_6 = 8722665584696958760ULL;
int var_10 = -1511036862;
int var_12 = -435640682;
unsigned int var_13 = 4071378858U;
long long int var_14 = -984290189592029840LL;
int var_15 = 2069443126;
int zero = 0;
signed char var_16 = (signed char)36;
signed char var_17 = (signed char)80;
unsigned char var_18 = (unsigned char)43;
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
