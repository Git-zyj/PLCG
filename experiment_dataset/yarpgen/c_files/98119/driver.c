#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -780699922;
unsigned short var_6 = (unsigned short)18856;
unsigned int var_8 = 1942279010U;
short var_11 = (short)9715;
unsigned short var_14 = (unsigned short)20515;
int zero = 0;
int var_19 = 1112326508;
unsigned int var_20 = 3335776652U;
unsigned short var_21 = (unsigned short)50285;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
