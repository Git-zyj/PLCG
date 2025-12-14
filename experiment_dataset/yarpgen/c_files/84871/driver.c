#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54348;
unsigned int var_6 = 2772026690U;
unsigned char var_7 = (unsigned char)48;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)98;
signed char var_19 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
