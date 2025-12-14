#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)20635;
_Bool var_6 = (_Bool)0;
unsigned long long int var_10 = 14862355229650495678ULL;
int var_14 = -1411123194;
signed char var_15 = (signed char)38;
unsigned long long int var_17 = 16590766044531419489ULL;
int zero = 0;
long long int var_20 = -8353984813966350118LL;
short var_21 = (short)-27757;
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
