#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6595304259720714354LL;
signed char var_3 = (signed char)53;
unsigned char var_5 = (unsigned char)111;
unsigned char var_6 = (unsigned char)92;
int zero = 0;
long long int var_10 = -1296371435798949477LL;
int var_11 = -1936899110;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)56769;
int var_14 = -469319673;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
