#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63470;
unsigned int var_6 = 2905137259U;
unsigned int var_12 = 1506009727U;
int zero = 0;
long long int var_16 = -7005150428487894955LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 998287508173219145ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
