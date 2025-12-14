#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -230452224085802741LL;
long long int var_6 = 1130347697523600900LL;
unsigned int var_7 = 2839210439U;
_Bool var_8 = (_Bool)0;
long long int var_9 = -311768475116708851LL;
short var_11 = (short)-1973;
int var_14 = -960623977;
long long int var_16 = 5955923975033438591LL;
short var_17 = (short)-1073;
unsigned char var_18 = (unsigned char)126;
int zero = 0;
long long int var_20 = -8921356582030191153LL;
long long int var_21 = -225454443755174064LL;
int var_22 = -1422978861;
unsigned char var_23 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
