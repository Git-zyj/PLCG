#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7790056220349587584LL;
int var_1 = -1410852412;
unsigned char var_3 = (unsigned char)91;
unsigned long long int var_5 = 2211160928599359284ULL;
signed char var_6 = (signed char)99;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 4896499147306983531ULL;
int var_13 = 702456057;
unsigned char var_14 = (unsigned char)26;
int zero = 0;
long long int var_18 = 4791518454932258959LL;
long long int var_19 = -3418777570382628568LL;
int var_20 = 334588942;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
