#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1325026401;
unsigned int var_3 = 1356013268U;
signed char var_4 = (signed char)119;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 479629184233466223ULL;
unsigned short var_13 = (unsigned short)45020;
unsigned short var_14 = (unsigned short)20485;
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
