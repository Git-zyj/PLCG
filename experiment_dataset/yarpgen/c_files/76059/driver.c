#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16054;
unsigned char var_3 = (unsigned char)27;
signed char var_6 = (signed char)-126;
unsigned short var_8 = (unsigned short)5685;
long long int var_13 = 557341964474115289LL;
unsigned long long int var_14 = 5162505140417806461ULL;
int zero = 0;
signed char var_20 = (signed char)-121;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
