#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)22997;
_Bool var_9 = (_Bool)0;
int var_11 = -989921378;
unsigned short var_12 = (unsigned short)57382;
short var_14 = (short)24311;
unsigned int var_15 = 1425136932U;
int var_16 = 1599560938;
int zero = 0;
signed char var_17 = (signed char)110;
signed char var_18 = (signed char)-53;
unsigned char var_19 = (unsigned char)188;
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
