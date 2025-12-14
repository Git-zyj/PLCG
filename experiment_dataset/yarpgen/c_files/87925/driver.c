#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3175147047118600291LL;
unsigned char var_2 = (unsigned char)128;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)62;
int zero = 0;
short var_10 = (short)9459;
long long int var_11 = -5117306627715072449LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
