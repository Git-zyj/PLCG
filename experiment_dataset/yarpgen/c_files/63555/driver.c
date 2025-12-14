#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
short var_8 = (short)-16982;
_Bool var_9 = (_Bool)1;
long long int var_10 = -6460942102665834733LL;
long long int var_11 = 7665197022264623530LL;
int zero = 0;
signed char var_12 = (signed char)-124;
int var_13 = 30214395;
unsigned char var_14 = (unsigned char)226;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
