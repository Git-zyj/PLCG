#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1680989519;
unsigned long long int var_6 = 5129804565997956504ULL;
unsigned char var_10 = (unsigned char)98;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_17 = 1754672465;
long long int var_18 = -2707221636652186719LL;
unsigned long long int var_19 = 3882143619183147280ULL;
unsigned char var_20 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
