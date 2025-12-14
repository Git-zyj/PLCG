#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)102;
unsigned char var_2 = (unsigned char)37;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)136;
signed char var_5 = (signed char)-32;
long long int var_9 = -1740741618982890034LL;
unsigned short var_10 = (unsigned short)29319;
long long int var_12 = -1441821632250223810LL;
int zero = 0;
int var_17 = 148260674;
int var_18 = 786098873;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
