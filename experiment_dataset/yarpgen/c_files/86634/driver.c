#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9153;
short var_5 = (short)-20620;
unsigned int var_6 = 2314387074U;
long long int var_7 = 6650990390450070611LL;
unsigned int var_18 = 2435532800U;
int zero = 0;
int var_19 = 1597916836;
short var_20 = (short)31863;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
