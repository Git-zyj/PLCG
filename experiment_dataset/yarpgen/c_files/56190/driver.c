#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2552123608071150467ULL;
unsigned short var_3 = (unsigned short)27360;
unsigned char var_4 = (unsigned char)171;
unsigned char var_7 = (unsigned char)82;
unsigned short var_10 = (unsigned short)51829;
unsigned int var_16 = 424227970U;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 3192951674469092310ULL;
void init() {
}

void checksum() {
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
