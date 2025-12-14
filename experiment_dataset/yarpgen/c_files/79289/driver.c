#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3646905410U;
unsigned long long int var_8 = 2156966667216302028ULL;
int zero = 0;
unsigned int var_10 = 1012849858U;
_Bool var_11 = (_Bool)1;
long long int var_12 = 7034044578593986787LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
