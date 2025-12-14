#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1210921698U;
int var_7 = -1037630076;
long long int var_10 = 6631596970614029995LL;
long long int var_13 = 5694807509893174286LL;
short var_15 = (short)16319;
int zero = 0;
long long int var_16 = 1052282492913143326LL;
long long int var_17 = 1902438480866400577LL;
void init() {
}

void checksum() {
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
