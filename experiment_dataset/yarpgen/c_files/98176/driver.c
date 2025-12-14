#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
long long int var_5 = -6131990286957681991LL;
long long int var_7 = -7611530544780425135LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_17 = -8608063594170815587LL;
unsigned long long int var_18 = 9252124761349984663ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
