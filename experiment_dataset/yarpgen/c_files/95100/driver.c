#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4196348887U;
unsigned char var_2 = (unsigned char)143;
long long int var_4 = 425312004931480381LL;
int var_5 = 401455469;
long long int var_12 = -9077828055700309731LL;
_Bool var_13 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-125;
_Bool var_21 = (_Bool)1;
int var_22 = -1083107704;
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
