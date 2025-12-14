#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4395982136803552117ULL;
unsigned int var_7 = 3771265978U;
unsigned short var_8 = (unsigned short)6709;
signed char var_13 = (signed char)-85;
short var_14 = (short)16122;
unsigned short var_17 = (unsigned short)7176;
int zero = 0;
unsigned int var_20 = 3567056046U;
unsigned int var_21 = 2058295253U;
void init() {
}

void checksum() {
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
