#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 697176220;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 12540049594910895635ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)200;
unsigned int var_12 = 1423743767U;
void init() {
}

void checksum() {
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
