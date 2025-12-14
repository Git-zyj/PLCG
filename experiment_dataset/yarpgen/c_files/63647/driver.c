#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)164;
_Bool var_8 = (_Bool)0;
short var_12 = (short)26431;
int zero = 0;
unsigned int var_13 = 1053625934U;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)15;
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
