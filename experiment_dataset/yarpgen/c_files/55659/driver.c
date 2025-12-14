#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41003;
unsigned short var_7 = (unsigned short)53269;
unsigned short var_8 = (unsigned short)54607;
unsigned short var_9 = (unsigned short)55892;
unsigned short var_10 = (unsigned short)44235;
unsigned short var_12 = (unsigned short)60493;
unsigned short var_13 = (unsigned short)30802;
unsigned short var_16 = (unsigned short)8544;
int zero = 0;
unsigned short var_17 = (unsigned short)42524;
unsigned short var_18 = (unsigned short)27174;
unsigned short var_19 = (unsigned short)7532;
unsigned short var_20 = (unsigned short)39948;
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
