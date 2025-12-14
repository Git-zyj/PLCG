#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)46;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 6271841397836253495ULL;
signed char var_15 = (signed char)42;
signed char var_16 = (signed char)3;
int zero = 0;
long long int var_17 = 85965035285971608LL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)24668;
int var_20 = -1522204999;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
