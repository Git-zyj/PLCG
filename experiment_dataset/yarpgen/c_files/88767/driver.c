#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)219;
long long int var_5 = 747012907722090788LL;
long long int var_8 = -8990591899186231204LL;
unsigned int var_9 = 1269211998U;
int zero = 0;
int var_10 = -1279980507;
unsigned long long int var_11 = 5659473197037667263ULL;
short var_12 = (short)11287;
long long int var_13 = 5125371983176770081LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
