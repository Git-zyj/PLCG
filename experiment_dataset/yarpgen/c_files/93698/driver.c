#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-53;
signed char var_2 = (signed char)-127;
unsigned short var_3 = (unsigned short)62072;
unsigned short var_6 = (unsigned short)20827;
long long int var_7 = -2443948148367962735LL;
unsigned short var_12 = (unsigned short)36134;
unsigned short var_15 = (unsigned short)57052;
int zero = 0;
signed char var_16 = (signed char)-104;
unsigned short var_17 = (unsigned short)2080;
unsigned short var_18 = (unsigned short)44098;
void init() {
}

void checksum() {
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
