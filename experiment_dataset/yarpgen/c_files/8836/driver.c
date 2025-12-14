#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)88;
unsigned char var_1 = (unsigned char)207;
unsigned char var_2 = (unsigned char)46;
signed char var_3 = (signed char)44;
unsigned short var_4 = (unsigned short)39205;
unsigned short var_5 = (unsigned short)51276;
unsigned long long int var_7 = 18067901308088752436ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-123;
int zero = 0;
int var_12 = -396664414;
signed char var_13 = (signed char)36;
int var_14 = 1599873886;
unsigned short var_15 = (unsigned short)2324;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
