#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12376;
unsigned char var_6 = (unsigned char)176;
unsigned char var_12 = (unsigned char)203;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)61;
unsigned long long int var_17 = 4006358814433468763ULL;
int zero = 0;
signed char var_20 = (signed char)-83;
signed char var_21 = (signed char)8;
long long int var_22 = -955790629854758550LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
