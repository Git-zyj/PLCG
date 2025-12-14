#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)180;
_Bool var_4 = (_Bool)0;
unsigned short var_9 = (unsigned short)13108;
unsigned int var_10 = 4053042716U;
int zero = 0;
signed char var_11 = (signed char)61;
short var_12 = (short)29798;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
