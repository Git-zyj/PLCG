#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51850;
unsigned short var_8 = (unsigned short)51444;
unsigned char var_14 = (unsigned char)104;
int var_19 = -878516342;
int zero = 0;
signed char var_20 = (signed char)10;
signed char var_21 = (signed char)113;
unsigned char var_22 = (unsigned char)105;
_Bool var_23 = (_Bool)1;
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
