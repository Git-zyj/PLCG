#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2531766819990989333LL;
unsigned int var_1 = 4147941770U;
signed char var_2 = (signed char)-86;
unsigned short var_4 = (unsigned short)30106;
unsigned int var_5 = 3326311857U;
short var_7 = (short)13394;
int zero = 0;
unsigned int var_10 = 1199763007U;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
