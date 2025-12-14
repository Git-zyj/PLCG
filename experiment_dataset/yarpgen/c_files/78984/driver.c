#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 106157256827282964ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_10 = (unsigned short)50199;
unsigned short var_12 = (unsigned short)38845;
int zero = 0;
signed char var_13 = (signed char)75;
unsigned char var_14 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
