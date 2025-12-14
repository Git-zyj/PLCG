#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12862;
unsigned long long int var_4 = 4156018703895459990ULL;
unsigned int var_5 = 2014675276U;
unsigned long long int var_8 = 9582302801068642171ULL;
long long int var_11 = 8809512916309822764LL;
unsigned long long int var_16 = 1060347741303276747ULL;
int zero = 0;
long long int var_19 = 8662513980969010132LL;
short var_20 = (short)23139;
short var_21 = (short)-9616;
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
