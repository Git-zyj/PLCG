#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-121;
short var_4 = (short)18569;
int var_5 = 1848331103;
long long int var_8 = 3792872450642905172LL;
long long int var_13 = -3665397514839506397LL;
short var_14 = (short)-31414;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 7336513681399688948ULL;
short var_17 = (short)14616;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
