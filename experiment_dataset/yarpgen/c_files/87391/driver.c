#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)1501;
unsigned int var_8 = 4023386804U;
unsigned long long int var_10 = 7910072859925130105ULL;
long long int var_11 = -6738215899709485880LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4573420092603716335LL;
unsigned short var_14 = (unsigned short)11752;
int var_15 = -1313469184;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
