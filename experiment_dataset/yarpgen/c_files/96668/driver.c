#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1816850998U;
unsigned long long int var_2 = 4549444572686630214ULL;
int var_4 = -1590294960;
signed char var_5 = (signed char)-119;
unsigned short var_6 = (unsigned short)15682;
unsigned char var_9 = (unsigned char)250;
signed char var_10 = (signed char)-4;
short var_11 = (short)4162;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-113;
int var_16 = -1243488542;
void init() {
}

void checksum() {
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
