#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_7 = (signed char)-112;
_Bool var_8 = (_Bool)1;
unsigned char var_14 = (unsigned char)67;
unsigned char var_16 = (unsigned char)138;
unsigned char var_17 = (unsigned char)120;
int zero = 0;
int var_20 = 1329133276;
short var_21 = (short)-29992;
short var_22 = (short)8858;
void init() {
}

void checksum() {
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
