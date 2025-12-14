#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3803742321U;
long long int var_4 = -2132360341236677110LL;
short var_5 = (short)-15788;
long long int var_6 = 71999017814533417LL;
unsigned char var_8 = (unsigned char)5;
unsigned char var_10 = (unsigned char)121;
int zero = 0;
short var_11 = (short)309;
unsigned char var_12 = (unsigned char)149;
int var_13 = -1606029513;
long long int var_14 = -3958654819618685554LL;
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
