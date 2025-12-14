#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2402706024U;
signed char var_4 = (signed char)-14;
unsigned short var_5 = (unsigned short)54833;
unsigned int var_6 = 4123280327U;
long long int var_8 = -2202713324503692110LL;
unsigned short var_9 = (unsigned short)39448;
long long int var_13 = 202312428280822510LL;
unsigned short var_14 = (unsigned short)21313;
int zero = 0;
unsigned long long int var_15 = 14088542815582463870ULL;
unsigned short var_16 = (unsigned short)54592;
short var_17 = (short)-29591;
long long int var_18 = -6660635647885228696LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
