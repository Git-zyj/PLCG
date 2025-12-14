#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)112;
short var_2 = (short)28507;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-44;
short var_6 = (short)-23890;
int var_8 = 655643375;
signed char var_9 = (signed char)47;
int zero = 0;
unsigned char var_10 = (unsigned char)45;
unsigned int var_11 = 1647800519U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
