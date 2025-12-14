#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)104;
signed char var_3 = (signed char)-61;
signed char var_8 = (signed char)13;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)183;
short var_13 = (short)10749;
int zero = 0;
unsigned int var_15 = 1329011367U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
