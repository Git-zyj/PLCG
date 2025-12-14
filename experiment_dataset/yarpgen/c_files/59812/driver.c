#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1084056664;
unsigned short var_5 = (unsigned short)40878;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int var_12 = 875801185;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_19 = -4964536904892402107LL;
_Bool var_20 = (_Bool)1;
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
