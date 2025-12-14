#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)32547;
unsigned short var_7 = (unsigned short)28680;
long long int var_15 = 8498328604512110300LL;
unsigned int var_16 = 1818869582U;
int var_17 = 749611568;
unsigned long long int var_18 = 1607611547333297115ULL;
int zero = 0;
long long int var_19 = 6281909716315035275LL;
unsigned char var_20 = (unsigned char)17;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
