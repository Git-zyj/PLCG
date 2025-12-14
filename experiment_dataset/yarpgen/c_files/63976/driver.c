#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6604078498509263129LL;
unsigned char var_7 = (unsigned char)30;
signed char var_9 = (signed char)-100;
_Bool var_10 = (_Bool)0;
short var_13 = (short)11769;
unsigned char var_14 = (unsigned char)48;
short var_16 = (short)-12189;
unsigned short var_19 = (unsigned short)29528;
int zero = 0;
long long int var_20 = 5359593602226704609LL;
unsigned short var_21 = (unsigned short)30821;
long long int var_22 = -909612002937842319LL;
unsigned short var_23 = (unsigned short)57632;
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
