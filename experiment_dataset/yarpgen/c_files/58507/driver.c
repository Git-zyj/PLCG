#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -569825607;
unsigned long long int var_2 = 8119035454140036170ULL;
int var_3 = -991306860;
unsigned char var_5 = (unsigned char)242;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)116;
short var_9 = (short)3957;
short var_10 = (short)10107;
int zero = 0;
int var_13 = 951438285;
signed char var_14 = (signed char)7;
signed char var_15 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
