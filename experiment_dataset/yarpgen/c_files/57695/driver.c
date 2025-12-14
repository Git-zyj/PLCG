#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 259210012;
signed char var_5 = (signed char)44;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-22;
unsigned short var_17 = (unsigned short)12852;
unsigned long long int var_18 = 15199389419360174298ULL;
_Bool var_19 = (_Bool)0;
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
