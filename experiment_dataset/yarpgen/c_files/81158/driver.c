#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55899;
unsigned long long int var_2 = 17206566787435467269ULL;
unsigned char var_6 = (unsigned char)242;
signed char var_9 = (signed char)-30;
unsigned long long int var_10 = 14151524263136967917ULL;
signed char var_12 = (signed char)117;
unsigned long long int var_13 = 3653165952725740263ULL;
unsigned short var_15 = (unsigned short)29761;
_Bool var_17 = (_Bool)0;
signed char var_19 = (signed char)-81;
int zero = 0;
unsigned short var_20 = (unsigned short)9190;
unsigned short var_21 = (unsigned short)55013;
unsigned short var_22 = (unsigned short)8888;
signed char var_23 = (signed char)-111;
signed char var_24 = (signed char)-110;
void init() {
}

void checksum() {
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
