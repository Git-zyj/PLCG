#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)10576;
int var_2 = 1138672345;
unsigned short var_7 = (unsigned short)21454;
signed char var_10 = (signed char)111;
signed char var_12 = (signed char)102;
signed char var_14 = (signed char)15;
unsigned int var_17 = 2511157815U;
int zero = 0;
unsigned char var_18 = (unsigned char)235;
unsigned short var_19 = (unsigned short)25604;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
