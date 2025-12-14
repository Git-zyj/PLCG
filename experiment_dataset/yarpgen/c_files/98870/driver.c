#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)103;
unsigned long long int var_5 = 12490894289349894213ULL;
unsigned char var_6 = (unsigned char)80;
int var_7 = 1748373719;
unsigned int var_8 = 2267456544U;
int zero = 0;
signed char var_11 = (signed char)111;
unsigned char var_12 = (unsigned char)247;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
