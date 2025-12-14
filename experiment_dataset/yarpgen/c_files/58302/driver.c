#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5767;
long long int var_7 = 7620977201270661235LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)6693;
int zero = 0;
unsigned char var_14 = (unsigned char)17;
signed char var_15 = (signed char)65;
unsigned int var_16 = 2202445493U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
