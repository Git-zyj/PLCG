#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13104114635717238140ULL;
unsigned char var_3 = (unsigned char)139;
unsigned char var_6 = (unsigned char)99;
int var_7 = 1372091925;
long long int var_8 = 1521071662076408933LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)32;
unsigned int var_13 = 1304486549U;
int zero = 0;
long long int var_17 = -3976277663084307572LL;
short var_18 = (short)7768;
signed char var_19 = (signed char)9;
short var_20 = (short)31527;
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
