#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1647797912U;
unsigned int var_5 = 2718314941U;
long long int var_6 = -3886442734879908987LL;
short var_9 = (short)-9805;
unsigned int var_13 = 2469098093U;
int var_16 = 1939229176;
unsigned int var_18 = 604569530U;
int zero = 0;
unsigned char var_19 = (unsigned char)148;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)9;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
