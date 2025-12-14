#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19747;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)33;
unsigned long long int var_7 = 11663394537771432108ULL;
int var_8 = 1797889371;
unsigned long long int var_9 = 4897599848126882681ULL;
unsigned char var_10 = (unsigned char)87;
int zero = 0;
short var_11 = (short)-1039;
short var_12 = (short)-12082;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
