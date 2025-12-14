#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23108;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-4360;
unsigned short var_7 = (unsigned short)56875;
int var_11 = -957716751;
unsigned short var_13 = (unsigned short)14564;
int zero = 0;
short var_18 = (short)29709;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
