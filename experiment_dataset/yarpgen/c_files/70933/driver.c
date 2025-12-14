#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 824745859936796788ULL;
unsigned long long int var_12 = 5649600900155414052ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 731270374U;
long long int var_18 = -6750712055811080614LL;
unsigned long long int var_19 = 5911178714598488289ULL;
int zero = 0;
unsigned long long int var_20 = 14406436763175478537ULL;
long long int var_21 = 1324232671648916414LL;
unsigned long long int var_22 = 3466259532250399621ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
