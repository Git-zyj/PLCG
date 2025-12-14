#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
int var_1 = -1567969419;
_Bool var_3 = (_Bool)1;
long long int var_7 = -8666068391916362836LL;
short var_8 = (short)5841;
int var_10 = 147925714;
unsigned char var_11 = (unsigned char)211;
int zero = 0;
short var_13 = (short)8558;
_Bool var_14 = (_Bool)0;
short var_15 = (short)26900;
void init() {
}

void checksum() {
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
