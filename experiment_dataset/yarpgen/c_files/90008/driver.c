#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14330504814992366565ULL;
long long int var_2 = -1319352084506331509LL;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)-59;
_Bool var_8 = (_Bool)1;
short var_9 = (short)12528;
signed char var_11 = (signed char)104;
unsigned char var_12 = (unsigned char)141;
int zero = 0;
unsigned int var_14 = 1179776134U;
signed char var_15 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
