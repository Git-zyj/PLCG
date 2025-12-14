#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)242;
unsigned char var_13 = (unsigned char)223;
unsigned char var_15 = (unsigned char)200;
unsigned short var_18 = (unsigned short)57952;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
