#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
unsigned int var_1 = 1592499504U;
short var_5 = (short)-20242;
long long int var_6 = -7459413541585868331LL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 588102990U;
long long int var_9 = -790980180150963025LL;
int zero = 0;
unsigned char var_10 = (unsigned char)127;
unsigned int var_11 = 466069111U;
short var_12 = (short)662;
unsigned long long int var_13 = 6066499357797270406ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
