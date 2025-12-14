#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 3918609882268157518LL;
signed char var_3 = (signed char)-118;
unsigned char var_4 = (unsigned char)43;
short var_6 = (short)5475;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)126;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-77;
short var_18 = (short)1693;
short var_19 = (short)-5579;
long long int var_20 = 324268619252113641LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
