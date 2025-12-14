#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19852;
_Bool var_1 = (_Bool)0;
long long int var_3 = 6028828188492263048LL;
long long int var_4 = -1099993785212032491LL;
short var_8 = (short)9257;
long long int var_10 = 6278405066520272373LL;
int zero = 0;
short var_13 = (short)5813;
_Bool var_14 = (_Bool)1;
int var_15 = -862035496;
short var_16 = (short)8924;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
