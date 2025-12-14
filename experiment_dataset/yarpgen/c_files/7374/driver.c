#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -207480732;
unsigned char var_5 = (unsigned char)241;
long long int var_6 = -3735512531313621654LL;
unsigned int var_8 = 2001821154U;
_Bool var_10 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)21;
long long int var_19 = 8729026017517468078LL;
short var_20 = (short)31661;
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
