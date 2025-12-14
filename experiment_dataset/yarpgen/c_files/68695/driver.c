#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1192585579;
_Bool var_1 = (_Bool)1;
short var_5 = (short)-111;
signed char var_8 = (signed char)41;
signed char var_10 = (signed char)-78;
short var_11 = (short)-27721;
unsigned int var_12 = 1340945472U;
int zero = 0;
unsigned char var_13 = (unsigned char)198;
short var_14 = (short)-5591;
void init() {
}

void checksum() {
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
