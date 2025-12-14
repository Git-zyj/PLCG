#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18325688887764343134ULL;
unsigned short var_2 = (unsigned short)6049;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)40630;
long long int var_19 = -2641414812462068323LL;
long long int var_20 = 6299168620969923881LL;
void init() {
}

void checksum() {
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
