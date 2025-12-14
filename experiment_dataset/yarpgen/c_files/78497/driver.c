#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12747;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 9806916831436526178ULL;
int zero = 0;
signed char var_16 = (signed char)-47;
signed char var_17 = (signed char)70;
long long int var_18 = 4971630718001130449LL;
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
