#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8533943862277655445LL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
short var_5 = (short)13871;
unsigned int var_6 = 3764263612U;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)112;
int zero = 0;
unsigned int var_12 = 3668565212U;
long long int var_13 = 1779583588495491977LL;
unsigned long long int var_14 = 14151914761923430001ULL;
unsigned int var_15 = 2915747725U;
unsigned char var_16 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
