#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 879144079771893606ULL;
unsigned int var_6 = 640483395U;
signed char var_8 = (signed char)-86;
unsigned char var_9 = (unsigned char)89;
unsigned int var_10 = 1038087686U;
unsigned int var_13 = 3462494085U;
short var_14 = (short)3901;
unsigned short var_17 = (unsigned short)6389;
unsigned int var_18 = 3356168621U;
int zero = 0;
unsigned char var_19 = (unsigned char)92;
int var_20 = 208618831;
unsigned short var_21 = (unsigned short)43950;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
