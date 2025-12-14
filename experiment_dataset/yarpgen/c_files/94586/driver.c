#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)76;
unsigned char var_2 = (unsigned char)58;
int var_3 = -1271741171;
unsigned long long int var_6 = 16759086971934964987ULL;
signed char var_8 = (signed char)-68;
short var_11 = (short)10430;
int zero = 0;
signed char var_14 = (signed char)-19;
short var_15 = (short)21011;
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
