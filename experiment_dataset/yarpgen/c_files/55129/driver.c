#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned int var_1 = 874558289U;
unsigned long long int var_3 = 3478924598780562584ULL;
long long int var_6 = -8997392552033523729LL;
unsigned long long int var_10 = 8483240126437087856ULL;
int zero = 0;
int var_13 = 1883285713;
unsigned long long int var_14 = 15570600680385195978ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
