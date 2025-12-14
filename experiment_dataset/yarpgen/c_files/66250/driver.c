#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)22;
unsigned short var_4 = (unsigned short)45536;
long long int var_9 = 7573938637434922200LL;
long long int var_10 = -3091065987244765258LL;
unsigned long long int var_11 = 6467091823329231537ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 14990105591400666005ULL;
int zero = 0;
unsigned int var_15 = 2758015319U;
unsigned char var_16 = (unsigned char)224;
void init() {
}

void checksum() {
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
