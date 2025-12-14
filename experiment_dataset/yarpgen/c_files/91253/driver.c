#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22517;
int var_1 = 1175927201;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 90726019223453456ULL;
unsigned int var_12 = 142643009U;
unsigned char var_13 = (unsigned char)95;
int var_17 = -586294585;
long long int var_18 = 8532054333443033671LL;
int zero = 0;
long long int var_20 = 7588328556325696067LL;
unsigned char var_21 = (unsigned char)196;
int var_22 = -1789212517;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
