#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5365738638870417089ULL;
int var_1 = 509084336;
long long int var_4 = -1791334280983547011LL;
unsigned int var_5 = 3345865503U;
long long int var_8 = -3829005171189444787LL;
int var_10 = 1537718784;
int zero = 0;
long long int var_11 = -6329229248189322418LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
