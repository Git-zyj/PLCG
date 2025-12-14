#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)198;
long long int var_2 = -1686777642859230059LL;
unsigned char var_9 = (unsigned char)126;
int zero = 0;
unsigned char var_11 = (unsigned char)112;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 7334709337521855492ULL;
short var_14 = (short)-26098;
unsigned char var_15 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
