#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28790;
unsigned long long int var_3 = 11794401999721234528ULL;
signed char var_5 = (signed char)-47;
short var_12 = (short)15074;
_Bool var_16 = (_Bool)0;
int var_17 = -654626145;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)28036;
unsigned short var_20 = (unsigned short)12857;
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
