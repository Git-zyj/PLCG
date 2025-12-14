#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)140;
long long int var_8 = -1807460367030413622LL;
unsigned char var_9 = (unsigned char)176;
short var_10 = (short)-12563;
_Bool var_11 = (_Bool)0;
int var_12 = 756275378;
int zero = 0;
unsigned char var_15 = (unsigned char)224;
unsigned long long int var_16 = 9279106998932018003ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
