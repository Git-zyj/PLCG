#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 531278313;
unsigned int var_3 = 2347369005U;
_Bool var_10 = (_Bool)0;
long long int var_12 = 600374148839022169LL;
_Bool var_13 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)203;
long long int var_21 = -5528637321980791445LL;
unsigned char var_22 = (unsigned char)97;
unsigned char var_23 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
