#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_8 = 2308991064U;
int var_10 = -2091866849;
int var_13 = 174890473;
short var_16 = (short)23039;
short var_18 = (short)31405;
int zero = 0;
unsigned char var_19 = (unsigned char)170;
signed char var_20 = (signed char)82;
short var_21 = (short)-29314;
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
