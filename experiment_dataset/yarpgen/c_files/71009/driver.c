#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 858457529752138760LL;
int var_3 = 1662378745;
_Bool var_7 = (_Bool)1;
long long int var_10 = -7872465477970227572LL;
int var_11 = -917241706;
unsigned int var_12 = 1444071461U;
int zero = 0;
unsigned short var_16 = (unsigned short)9272;
long long int var_17 = 5582354405148827058LL;
long long int var_18 = 7949113456879407352LL;
int var_19 = -1085017114;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
