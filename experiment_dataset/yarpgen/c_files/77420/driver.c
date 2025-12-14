#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)630;
signed char var_10 = (signed char)-91;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)49079;
int zero = 0;
unsigned short var_19 = (unsigned short)56159;
unsigned short var_20 = (unsigned short)33471;
void init() {
}

void checksum() {
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
