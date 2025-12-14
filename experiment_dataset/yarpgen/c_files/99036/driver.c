#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5543130226500182791LL;
short var_12 = (short)22417;
unsigned int var_15 = 2886908862U;
unsigned short var_17 = (unsigned short)60009;
int zero = 0;
int var_20 = -2114702640;
unsigned char var_21 = (unsigned char)176;
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
