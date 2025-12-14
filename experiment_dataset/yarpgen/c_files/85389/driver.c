#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 309276074U;
unsigned char var_2 = (unsigned char)236;
long long int var_3 = -7189853613002417005LL;
unsigned short var_7 = (unsigned short)46713;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3226834541U;
long long int var_16 = 3911583981354743011LL;
int zero = 0;
unsigned long long int var_19 = 10401510303274235388ULL;
unsigned long long int var_20 = 16675283515825621812ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
