#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-102;
unsigned int var_4 = 4186124726U;
int var_8 = -345855241;
unsigned int var_9 = 3100756455U;
int var_13 = -2002837044;
int zero = 0;
unsigned char var_15 = (unsigned char)43;
signed char var_16 = (signed char)10;
void init() {
}

void checksum() {
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
