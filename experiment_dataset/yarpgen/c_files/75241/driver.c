#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
long long int var_1 = -4463411821449322045LL;
long long int var_2 = 4353786891960622346LL;
unsigned char var_5 = (unsigned char)96;
unsigned long long int var_8 = 8387810173674741168ULL;
unsigned char var_12 = (unsigned char)173;
int zero = 0;
unsigned short var_16 = (unsigned short)4308;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5195674563536197381LL;
unsigned short var_19 = (unsigned short)31151;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
