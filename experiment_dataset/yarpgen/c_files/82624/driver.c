#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_7 = (unsigned short)1357;
_Bool var_9 = (_Bool)1;
signed char var_13 = (signed char)-107;
unsigned short var_15 = (unsigned short)40532;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = -1896751199;
signed char var_19 = (signed char)106;
signed char var_20 = (signed char)6;
void init() {
}

void checksum() {
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
