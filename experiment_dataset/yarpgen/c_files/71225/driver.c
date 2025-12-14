#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5495288032672307754LL;
unsigned char var_1 = (unsigned char)95;
_Bool var_3 = (_Bool)1;
int var_4 = -2027337215;
int var_5 = -719546084;
unsigned long long int var_6 = 4291918404383773085ULL;
signed char var_9 = (signed char)21;
_Bool var_10 = (_Bool)0;
int var_12 = 745483421;
signed char var_14 = (signed char)53;
int var_16 = 1252085763;
int zero = 0;
unsigned short var_17 = (unsigned short)25130;
unsigned char var_18 = (unsigned char)149;
int var_19 = 875579805;
int var_20 = 1604989019;
void init() {
}

void checksum() {
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
