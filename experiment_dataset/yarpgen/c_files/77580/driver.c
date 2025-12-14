#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 704175159U;
short var_4 = (short)-16928;
_Bool var_10 = (_Bool)1;
unsigned char var_18 = (unsigned char)67;
int zero = 0;
unsigned int var_19 = 4203669640U;
unsigned char var_20 = (unsigned char)60;
unsigned short var_21 = (unsigned short)3121;
unsigned char var_22 = (unsigned char)151;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
