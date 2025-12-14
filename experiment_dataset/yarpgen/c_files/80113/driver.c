#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49684;
int var_10 = 1357227749;
int zero = 0;
long long int var_15 = 1929604428804175565LL;
int var_16 = 1305418102;
unsigned short var_17 = (unsigned short)33761;
signed char var_18 = (signed char)78;
long long int var_19 = 1914176211841214346LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
