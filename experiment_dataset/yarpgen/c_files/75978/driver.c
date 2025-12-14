#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4011683052612529916LL;
unsigned short var_4 = (unsigned short)46691;
unsigned long long int var_6 = 11197042340445652392ULL;
unsigned short var_9 = (unsigned short)43890;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 746380966585718622ULL;
short var_13 = (short)5046;
unsigned long long int var_14 = 8640643026869252248ULL;
void init() {
}

void checksum() {
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
