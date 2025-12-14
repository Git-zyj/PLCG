#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 508576766;
unsigned int var_1 = 104786344U;
signed char var_2 = (signed char)90;
unsigned char var_5 = (unsigned char)91;
unsigned short var_9 = (unsigned short)3618;
int zero = 0;
long long int var_10 = -2087752781293394482LL;
unsigned int var_11 = 403041184U;
unsigned long long int var_12 = 1515033653780939413ULL;
unsigned int var_13 = 2230897460U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
