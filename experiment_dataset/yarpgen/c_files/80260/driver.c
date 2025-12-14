#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 712927906651506075ULL;
unsigned long long int var_5 = 4082780491029909526ULL;
long long int var_6 = -7430363719744673442LL;
signed char var_11 = (signed char)0;
int zero = 0;
unsigned short var_14 = (unsigned short)41251;
signed char var_15 = (signed char)-87;
short var_16 = (short)-6777;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
