#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3740913736U;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_15 = 4059169441U;
short var_17 = (short)-5488;
int zero = 0;
long long int var_18 = -2792730196299871988LL;
unsigned int var_19 = 251984656U;
unsigned short var_20 = (unsigned short)28935;
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
