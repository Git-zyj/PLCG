#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8543637036756596469ULL;
unsigned long long int var_3 = 3197435052277394557ULL;
int var_5 = 1789983250;
int var_6 = 1783942691;
unsigned long long int var_7 = 5983053348077159475ULL;
signed char var_12 = (signed char)66;
unsigned long long int var_14 = 1042513344669161173ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)30058;
int var_16 = -476853725;
unsigned long long int var_17 = 10930607933468081055ULL;
signed char var_18 = (signed char)31;
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
