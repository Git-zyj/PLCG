#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1762;
unsigned char var_3 = (unsigned char)28;
unsigned int var_5 = 3402242818U;
unsigned char var_7 = (unsigned char)211;
int zero = 0;
int var_12 = 977884431;
unsigned int var_13 = 2706893206U;
unsigned long long int var_14 = 2759205616685720474ULL;
unsigned int var_15 = 2803174084U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
