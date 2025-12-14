#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14162;
unsigned char var_8 = (unsigned char)88;
signed char var_9 = (signed char)-7;
unsigned long long int var_10 = 14460856402707233910ULL;
short var_12 = (short)11329;
unsigned char var_13 = (unsigned char)163;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = -7985199855153160836LL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)226;
unsigned char var_19 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
