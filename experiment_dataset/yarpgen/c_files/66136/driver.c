#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 118163782U;
unsigned int var_3 = 4142872537U;
short var_5 = (short)19758;
unsigned int var_8 = 2461373980U;
long long int var_9 = 5215507812759534568LL;
int zero = 0;
unsigned char var_11 = (unsigned char)133;
unsigned char var_12 = (unsigned char)198;
unsigned long long int var_13 = 8477610827404772485ULL;
unsigned short var_14 = (unsigned short)7785;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
