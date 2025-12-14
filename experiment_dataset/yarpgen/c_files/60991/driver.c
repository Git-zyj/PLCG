#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3827807004611761492LL;
_Bool var_2 = (_Bool)1;
int var_7 = -842507672;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2272610419U;
int zero = 0;
short var_12 = (short)-5206;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)43;
unsigned int var_15 = 2368246661U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
