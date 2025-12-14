#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)204;
int var_8 = -1079725355;
short var_10 = (short)-20374;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)70;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 1340223415;
unsigned long long int var_19 = 14038315446230385636ULL;
unsigned char var_20 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
