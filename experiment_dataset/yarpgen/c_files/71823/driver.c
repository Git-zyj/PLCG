#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1084048583;
unsigned int var_19 = 947644157U;
int zero = 0;
unsigned char var_20 = (unsigned char)143;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 109099355175652716ULL;
unsigned char var_23 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
