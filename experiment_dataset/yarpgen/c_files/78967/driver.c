#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)21;
signed char var_5 = (signed char)-85;
unsigned int var_6 = 3610718911U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 4199624479063851693ULL;
unsigned char var_11 = (unsigned char)197;
signed char var_12 = (signed char)-79;
int zero = 0;
short var_14 = (short)-7965;
signed char var_15 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
