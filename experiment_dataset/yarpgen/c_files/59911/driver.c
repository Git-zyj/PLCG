#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 1353388319;
unsigned long long int var_3 = 3021068225105204255ULL;
int var_5 = 942390749;
int var_6 = -245526654;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)3334;
short var_20 = (short)-26074;
void init() {
}

void checksum() {
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
