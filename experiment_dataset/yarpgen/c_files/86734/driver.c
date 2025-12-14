#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 458517371U;
unsigned char var_1 = (unsigned char)127;
unsigned long long int var_3 = 1184338171869257916ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 3848494013U;
unsigned long long int var_12 = 16102717841640549081ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)75;
signed char var_15 = (signed char)-63;
short var_16 = (short)14886;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
