#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 10529870512098021588ULL;
int var_11 = 1695921427;
unsigned short var_13 = (unsigned short)52644;
int zero = 0;
long long int var_14 = -2589277683253421955LL;
unsigned long long int var_15 = 13666899405530926129ULL;
void init() {
}

void checksum() {
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
