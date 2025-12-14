#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1350;
unsigned int var_8 = 2293325243U;
_Bool var_9 = (_Bool)0;
unsigned short var_13 = (unsigned short)45288;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)4015;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8394171930916959683LL;
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
