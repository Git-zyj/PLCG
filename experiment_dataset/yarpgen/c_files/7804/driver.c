#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29937;
int var_7 = 1374428157;
int var_10 = -380818523;
_Bool var_13 = (_Bool)1;
unsigned long long int var_16 = 12028938130626297936ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)27;
short var_21 = (short)20035;
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
