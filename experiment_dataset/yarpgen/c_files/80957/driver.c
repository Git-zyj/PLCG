#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)26404;
unsigned char var_8 = (unsigned char)209;
int var_10 = -1626615979;
int var_16 = 958529632;
int zero = 0;
unsigned int var_18 = 2803422756U;
long long int var_19 = 1639547793784067231LL;
short var_20 = (short)8135;
unsigned int var_21 = 993185866U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
