#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)16;
unsigned long long int var_15 = 17147036180484483802ULL;
unsigned long long int var_18 = 10053504790873463100ULL;
int zero = 0;
signed char var_19 = (signed char)-51;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-31478;
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
