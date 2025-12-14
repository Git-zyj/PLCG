#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1021228122U;
unsigned short var_2 = (unsigned short)65514;
signed char var_5 = (signed char)106;
unsigned short var_6 = (unsigned short)34294;
unsigned char var_7 = (unsigned char)87;
unsigned short var_9 = (unsigned short)18495;
signed char var_10 = (signed char)115;
unsigned char var_12 = (unsigned char)254;
int zero = 0;
long long int var_13 = 1650364777988512027LL;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)27767;
unsigned int var_16 = 3883369663U;
void init() {
}

void checksum() {
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
