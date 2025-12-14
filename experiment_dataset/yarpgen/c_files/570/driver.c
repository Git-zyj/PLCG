#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 278863941;
unsigned short var_3 = (unsigned short)10436;
unsigned long long int var_5 = 10989790824613942244ULL;
unsigned short var_8 = (unsigned short)54535;
int var_9 = 8056858;
int zero = 0;
unsigned char var_11 = (unsigned char)151;
unsigned short var_12 = (unsigned short)3086;
unsigned int var_13 = 3032878268U;
unsigned short var_14 = (unsigned short)35345;
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
