#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2033175758U;
unsigned int var_4 = 1151922918U;
unsigned short var_5 = (unsigned short)21158;
long long int var_8 = -9006262566891389023LL;
_Bool var_9 = (_Bool)1;
long long int var_11 = 861532570645460960LL;
unsigned short var_13 = (unsigned short)14057;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -51597389;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
