#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1783572511U;
int var_3 = -1403182602;
unsigned char var_7 = (unsigned char)50;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 1204719832U;
unsigned short var_14 = (unsigned short)63813;
int zero = 0;
int var_16 = 696885978;
long long int var_17 = -8722359462301487844LL;
unsigned int var_18 = 631614906U;
long long int var_19 = -3096233287498629113LL;
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
