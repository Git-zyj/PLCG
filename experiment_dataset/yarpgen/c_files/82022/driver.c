#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32238;
short var_9 = (short)-14000;
unsigned short var_10 = (unsigned short)22152;
unsigned long long int var_14 = 6611820938158201833ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_19 = 959781310U;
int zero = 0;
short var_20 = (short)1548;
short var_21 = (short)-16993;
unsigned int var_22 = 2295552707U;
unsigned char var_23 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
