#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7279769459356949862ULL;
long long int var_3 = 4681174599929128712LL;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)158;
unsigned char var_10 = (unsigned char)157;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 11834162948451695509ULL;
int zero = 0;
int var_17 = 2023002895;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)228;
short var_20 = (short)-7406;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
