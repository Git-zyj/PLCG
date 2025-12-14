#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)40;
unsigned int var_6 = 138095707U;
int var_7 = -1056287519;
unsigned char var_8 = (unsigned char)249;
unsigned short var_10 = (unsigned short)18091;
unsigned int var_15 = 1509768880U;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7275759201074114764LL;
unsigned int var_21 = 794592590U;
unsigned short var_22 = (unsigned short)38155;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
