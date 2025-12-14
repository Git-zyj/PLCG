#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)-19347;
unsigned int var_5 = 1337814413U;
unsigned long long int var_7 = 7240105735192862296ULL;
int var_9 = -211847450;
int zero = 0;
unsigned int var_12 = 2326144187U;
unsigned long long int var_13 = 5531840621626974929ULL;
void init() {
}

void checksum() {
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
