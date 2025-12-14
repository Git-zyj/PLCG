#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2333265267U;
short var_2 = (short)-29410;
unsigned int var_3 = 3922370884U;
int var_4 = -1137760269;
int var_5 = 1193115386;
int var_7 = -1541185256;
_Bool var_8 = (_Bool)1;
long long int var_9 = -3429097573149402271LL;
signed char var_11 = (signed char)28;
unsigned char var_12 = (unsigned char)254;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)35;
long long int var_16 = 3777728266510039686LL;
long long int var_17 = 7128161962540228375LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
