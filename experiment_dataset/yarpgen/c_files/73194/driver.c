#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16710;
unsigned char var_7 = (unsigned char)237;
short var_10 = (short)-5535;
unsigned long long int var_11 = 17654859336441955870ULL;
long long int var_12 = 4923454988364450865LL;
int var_14 = 931530120;
unsigned short var_15 = (unsigned short)60590;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)141;
void init() {
}

void checksum() {
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
