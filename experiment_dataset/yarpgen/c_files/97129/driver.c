#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2293946374283295059LL;
short var_2 = (short)-12067;
unsigned short var_3 = (unsigned short)58743;
unsigned int var_12 = 1177525799U;
unsigned int var_14 = 1765941519U;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 871071712877380345LL;
unsigned short var_22 = (unsigned short)3867;
unsigned int var_23 = 3432574998U;
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
