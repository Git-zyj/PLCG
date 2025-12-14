#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
short var_1 = (short)20224;
short var_9 = (short)20179;
short var_12 = (short)-20231;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)35;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-6234;
long long int var_21 = 4872009415142044728LL;
unsigned long long int var_22 = 9965721120199498351ULL;
void init() {
}

void checksum() {
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
