#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
signed char var_1 = (signed char)72;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)35;
signed char var_4 = (signed char)34;
unsigned char var_7 = (unsigned char)232;
int zero = 0;
int var_12 = -1876695386;
signed char var_13 = (signed char)89;
unsigned int var_14 = 2102165372U;
void init() {
}

void checksum() {
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
