#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8467440539802032618LL;
unsigned long long int var_6 = 2151819456080223134ULL;
unsigned long long int var_8 = 14142108812128412522ULL;
unsigned long long int var_10 = 8598058687502518712ULL;
int zero = 0;
unsigned int var_13 = 489092250U;
unsigned long long int var_14 = 4247617684262419851ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
