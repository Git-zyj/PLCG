#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_16 = (unsigned short)46933;
unsigned short var_17 = (unsigned short)35666;
long long int var_18 = -7039832474628553545LL;
short var_19 = (short)27988;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)59599;
unsigned short var_22 = (unsigned short)35653;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
