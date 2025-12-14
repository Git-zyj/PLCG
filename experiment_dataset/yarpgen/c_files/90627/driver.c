#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14124270748361461825ULL;
long long int var_5 = 3507642389335778875LL;
short var_6 = (short)-18550;
int var_7 = 867835049;
_Bool var_8 = (_Bool)0;
long long int var_9 = -727184584153580501LL;
int zero = 0;
unsigned int var_10 = 2695648295U;
unsigned char var_11 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
