#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)13;
unsigned long long int var_4 = 13492917876050537384ULL;
unsigned int var_12 = 385826077U;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)229;
unsigned char var_17 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
