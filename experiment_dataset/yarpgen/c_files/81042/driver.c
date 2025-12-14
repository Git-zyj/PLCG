#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)42693;
unsigned short var_7 = (unsigned short)42656;
unsigned short var_10 = (unsigned short)34583;
long long int var_13 = 6782456036630581019LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8070811061017291918LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
