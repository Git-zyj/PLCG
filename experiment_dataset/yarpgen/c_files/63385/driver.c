#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = -7316171486991288767LL;
long long int var_5 = -467302259949811646LL;
long long int var_7 = 1248229997651635344LL;
short var_9 = (short)-14867;
long long int var_10 = 2998605226320387567LL;
long long int var_11 = 3294538675166409456LL;
short var_17 = (short)14170;
int zero = 0;
unsigned short var_19 = (unsigned short)54815;
unsigned long long int var_20 = 12985018293107404080ULL;
unsigned short var_21 = (unsigned short)24841;
_Bool var_22 = (_Bool)1;
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
