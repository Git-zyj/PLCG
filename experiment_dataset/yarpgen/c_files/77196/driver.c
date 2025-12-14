#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4014536849424409033LL;
long long int var_3 = -725206293845521020LL;
unsigned char var_4 = (unsigned char)214;
unsigned int var_5 = 841758787U;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
long long int var_12 = -8529699366449243451LL;
unsigned long long int var_13 = 6649458430548809563ULL;
unsigned int var_14 = 413828507U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
