#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)126;
int var_5 = 134085595;
unsigned char var_7 = (unsigned char)123;
signed char var_8 = (signed char)83;
int var_9 = -545378512;
int zero = 0;
signed char var_12 = (signed char)-1;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
