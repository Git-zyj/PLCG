#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)63127;
unsigned char var_5 = (unsigned char)130;
int var_11 = -611999578;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2117272966U;
unsigned short var_15 = (unsigned short)13809;
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
