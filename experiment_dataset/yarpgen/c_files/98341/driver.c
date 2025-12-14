#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 886001289U;
signed char var_3 = (signed char)-8;
int var_5 = 1290547061;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1224069555U;
long long int var_9 = -2153210215634496675LL;
unsigned long long int var_12 = 11389568406519398061ULL;
unsigned char var_16 = (unsigned char)242;
int zero = 0;
unsigned short var_20 = (unsigned short)64275;
int var_21 = 1896232407;
int var_22 = -1043548144;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
