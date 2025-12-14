#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_7 = (short)24350;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)30498;
int var_14 = 1929807462;
unsigned long long int var_15 = 16450729500630824362ULL;
int var_17 = 536399476;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 9054451710111785245ULL;
unsigned char var_21 = (unsigned char)161;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 15030445188428837090ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
