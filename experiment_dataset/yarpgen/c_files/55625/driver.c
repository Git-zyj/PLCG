#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2328;
long long int var_4 = 5239308995137434592LL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)42014;
int var_7 = -328653132;
long long int var_11 = 8718047044018658455LL;
int var_12 = -829679266;
int zero = 0;
unsigned long long int var_14 = 101324645010546505ULL;
short var_15 = (short)6376;
long long int var_16 = 6132786447736749356LL;
signed char var_17 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
