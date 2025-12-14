#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1596821611;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)5791;
signed char var_7 = (signed char)34;
unsigned short var_8 = (unsigned short)60958;
unsigned int var_11 = 2377891455U;
long long int var_15 = 4542420679828938075LL;
int var_16 = -166606254;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -1620391949913038353LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
