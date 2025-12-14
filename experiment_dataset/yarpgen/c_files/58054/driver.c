#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13625556026735448965ULL;
signed char var_4 = (signed char)-108;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)61;
unsigned short var_9 = (unsigned short)48220;
short var_11 = (short)-7743;
unsigned char var_15 = (unsigned char)31;
unsigned short var_17 = (unsigned short)44380;
long long int var_18 = -6160187642122269683LL;
int zero = 0;
unsigned int var_19 = 499243523U;
_Bool var_20 = (_Bool)1;
short var_21 = (short)17722;
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
