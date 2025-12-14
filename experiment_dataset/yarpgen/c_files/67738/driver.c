#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20819;
long long int var_3 = -6004228213955538859LL;
signed char var_5 = (signed char)48;
unsigned short var_9 = (unsigned short)3357;
unsigned short var_10 = (unsigned short)47087;
int var_11 = -750390410;
unsigned short var_12 = (unsigned short)60282;
unsigned int var_13 = 1647835622U;
int zero = 0;
int var_14 = -296930097;
unsigned long long int var_15 = 8935919364687598262ULL;
long long int var_16 = -3551660208992020247LL;
void init() {
}

void checksum() {
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
