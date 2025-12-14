#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 463982794U;
long long int var_4 = 1378020246640162522LL;
unsigned long long int var_6 = 7372466028272073163ULL;
unsigned long long int var_7 = 4865423119778495357ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1753165198U;
int zero = 0;
int var_11 = -701674643;
int var_12 = 2118060736;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
