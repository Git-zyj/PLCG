#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)56581;
unsigned long long int var_6 = 13540812248738117694ULL;
_Bool var_7 = (_Bool)1;
signed char var_17 = (signed char)23;
int zero = 0;
long long int var_19 = 8693274436304588469LL;
unsigned long long int var_20 = 607914431867511555ULL;
short var_21 = (short)24258;
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
