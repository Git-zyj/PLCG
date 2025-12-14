#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4038416210034583823ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 18341775644327626587ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 2922498363685531927ULL;
unsigned int var_13 = 2782073073U;
int zero = 0;
unsigned long long int var_14 = 4196568568981130956ULL;
unsigned long long int var_15 = 10363647063547229087ULL;
unsigned long long int var_16 = 10500914105160983558ULL;
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
