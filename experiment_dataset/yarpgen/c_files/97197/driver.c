#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1685;
short var_2 = (short)-6086;
int var_3 = -1258820473;
int var_6 = -1215891922;
unsigned short var_8 = (unsigned short)23891;
int var_9 = 1891925147;
int var_14 = 733691416;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_18 = -1170337634;
int var_19 = 496582447;
int var_20 = -1137887402;
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
