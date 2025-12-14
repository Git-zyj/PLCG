#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)5;
unsigned int var_2 = 1534404272U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_9 = -816726531;
int zero = 0;
short var_11 = (short)5714;
unsigned char var_12 = (unsigned char)235;
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
