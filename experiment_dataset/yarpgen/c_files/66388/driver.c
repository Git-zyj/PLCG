#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1009979916;
short var_5 = (short)31521;
short var_6 = (short)-17808;
unsigned long long int var_7 = 5920994814831810556ULL;
unsigned short var_11 = (unsigned short)31734;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)104;
unsigned int var_18 = 272244966U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
