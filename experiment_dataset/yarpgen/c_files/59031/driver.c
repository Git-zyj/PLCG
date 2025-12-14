#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28530;
short var_4 = (short)-17814;
unsigned short var_9 = (unsigned short)46070;
signed char var_12 = (signed char)-22;
unsigned long long int var_15 = 4808779009301554432ULL;
signed char var_16 = (signed char)33;
int zero = 0;
unsigned short var_18 = (unsigned short)65364;
unsigned long long int var_19 = 3775947624109501407ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)97;
unsigned short var_22 = (unsigned short)56103;
int var_23 = -599719568;
unsigned long long int var_24 = 10533082461809966170ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
