#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15720820101331313260ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)13980;
short var_10 = (short)12860;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int var_13 = -427361370;
int var_14 = 1581767361;
int zero = 0;
unsigned long long int var_15 = 13617551545423100974ULL;
long long int var_16 = -5146131192881490416LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
