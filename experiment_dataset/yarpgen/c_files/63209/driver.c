#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)80;
int var_14 = 2001644813;
unsigned int var_18 = 2997275692U;
int zero = 0;
signed char var_20 = (signed char)-114;
unsigned long long int var_21 = 5278781530772013ULL;
unsigned char var_22 = (unsigned char)92;
void init() {
}

void checksum() {
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
