#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)23;
int var_7 = 1912092521;
unsigned short var_12 = (unsigned short)38256;
int zero = 0;
unsigned long long int var_13 = 11044097729317377313ULL;
signed char var_14 = (signed char)10;
unsigned int var_15 = 3037590527U;
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
