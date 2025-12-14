#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6490918234129011106LL;
_Bool var_7 = (_Bool)1;
short var_11 = (short)-30111;
int zero = 0;
unsigned long long int var_13 = 11241210412167431908ULL;
unsigned int var_14 = 638984427U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)11816;
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
