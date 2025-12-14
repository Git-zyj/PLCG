#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1605808104292554629LL;
signed char var_1 = (signed char)84;
signed char var_2 = (signed char)78;
unsigned short var_3 = (unsigned short)32619;
unsigned int var_4 = 2549523434U;
unsigned long long int var_7 = 9217415580536430654ULL;
unsigned short var_12 = (unsigned short)10847;
int zero = 0;
signed char var_13 = (signed char)29;
unsigned char var_14 = (unsigned char)82;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
