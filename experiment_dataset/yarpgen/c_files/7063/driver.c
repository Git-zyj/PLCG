#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
unsigned int var_3 = 3107166551U;
short var_5 = (short)9326;
int var_9 = 1876816232;
short var_10 = (short)-19117;
unsigned long long int var_14 = 13324849585034869917ULL;
unsigned long long int var_15 = 15808507361370717014ULL;
int zero = 0;
short var_19 = (short)-14088;
unsigned int var_20 = 2224522922U;
short var_21 = (short)27270;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
