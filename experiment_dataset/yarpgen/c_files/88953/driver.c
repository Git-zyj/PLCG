#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
int var_1 = -1685718494;
unsigned int var_4 = 3969854003U;
unsigned short var_13 = (unsigned short)13680;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)41;
int zero = 0;
unsigned long long int var_18 = 4008824783213131850ULL;
unsigned char var_19 = (unsigned char)199;
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
