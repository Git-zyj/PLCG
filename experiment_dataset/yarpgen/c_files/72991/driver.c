#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-63;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 294631903941395114ULL;
short var_4 = (short)24824;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 2218772691195347247ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)6280;
long long int var_11 = 6437182822683153974LL;
int zero = 0;
long long int var_16 = 8781432310020863892LL;
int var_17 = -1814196000;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-114;
long long int var_20 = 4572217896248511660LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
