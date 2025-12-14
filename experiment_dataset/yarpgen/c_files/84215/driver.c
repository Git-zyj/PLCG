#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8150056095434653710ULL;
short var_1 = (short)19672;
unsigned int var_6 = 1722553395U;
unsigned char var_8 = (unsigned char)147;
unsigned char var_10 = (unsigned char)6;
unsigned long long int var_11 = 14776045508512416750ULL;
short var_13 = (short)32407;
int var_14 = 1295409325;
int zero = 0;
signed char var_16 = (signed char)77;
unsigned long long int var_17 = 7477102685000988230ULL;
_Bool var_18 = (_Bool)1;
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
