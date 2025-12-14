#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2890710142U;
long long int var_1 = -9101564232714169893LL;
int var_4 = 1994112452;
unsigned char var_9 = (unsigned char)30;
unsigned long long int var_15 = 991583135773992437ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 8888312169739529439ULL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
