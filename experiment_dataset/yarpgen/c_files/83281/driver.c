#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 13781858998384234413ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)3447;
unsigned long long int var_8 = 15171989688327751759ULL;
unsigned int var_12 = 3825841337U;
_Bool var_14 = (_Bool)0;
short var_17 = (short)25949;
int zero = 0;
signed char var_19 = (signed char)1;
unsigned char var_20 = (unsigned char)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
