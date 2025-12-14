#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)111;
long long int var_7 = -1172370265323181135LL;
signed char var_8 = (signed char)-38;
short var_9 = (short)11397;
signed char var_10 = (signed char)9;
signed char var_12 = (signed char)125;
_Bool var_13 = (_Bool)0;
long long int var_14 = -8033679400745283708LL;
int zero = 0;
long long int var_18 = -6282914752361715216LL;
_Bool var_19 = (_Bool)0;
int var_20 = -789701827;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
