#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)-47;
_Bool var_8 = (_Bool)0;
long long int var_9 = 8787420700079001256LL;
unsigned char var_10 = (unsigned char)202;
unsigned int var_12 = 756208887U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)15931;
unsigned short var_18 = (unsigned short)50611;
int zero = 0;
short var_20 = (short)13697;
int var_21 = 532851916;
short var_22 = (short)29201;
short var_23 = (short)-30935;
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
