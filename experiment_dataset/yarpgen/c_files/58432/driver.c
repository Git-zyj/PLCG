#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10411622388076801070ULL;
unsigned char var_1 = (unsigned char)87;
long long int var_2 = 7725154678192830805LL;
int var_4 = 2123810164;
unsigned char var_7 = (unsigned char)23;
unsigned long long int var_8 = 1536599474438558467ULL;
unsigned char var_13 = (unsigned char)184;
int zero = 0;
unsigned long long int var_14 = 14682177136898643478ULL;
unsigned long long int var_15 = 9291861727619270857ULL;
_Bool var_16 = (_Bool)1;
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
