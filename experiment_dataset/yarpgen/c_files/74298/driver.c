#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8859182541747518679LL;
signed char var_1 = (signed char)108;
unsigned long long int var_2 = 12430940079413125507ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_10 = 7327515228443190342ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)73;
unsigned char var_19 = (unsigned char)141;
_Bool var_20 = (_Bool)0;
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
