#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1035420470U;
unsigned char var_4 = (unsigned char)123;
_Bool var_8 = (_Bool)0;
unsigned int var_12 = 3247628103U;
int zero = 0;
unsigned char var_13 = (unsigned char)183;
unsigned char var_14 = (unsigned char)183;
int var_15 = 1176849905;
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
