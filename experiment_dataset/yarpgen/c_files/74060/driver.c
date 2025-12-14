#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13803210934842607062ULL;
unsigned short var_6 = (unsigned short)38068;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1604796990U;
unsigned char var_12 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
