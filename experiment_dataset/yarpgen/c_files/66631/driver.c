#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 151445103U;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)14;
unsigned long long int var_3 = 6211478273583639186ULL;
unsigned char var_4 = (unsigned char)101;
unsigned short var_5 = (unsigned short)8482;
unsigned char var_8 = (unsigned char)46;
unsigned short var_9 = (unsigned short)37955;
unsigned char var_10 = (unsigned char)30;
unsigned short var_11 = (unsigned short)15615;
int zero = 0;
short var_12 = (short)-12747;
unsigned long long int var_13 = 4368002554191808938ULL;
long long int var_14 = 6188294900930751012LL;
unsigned char var_15 = (unsigned char)233;
int var_16 = -1391509049;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
