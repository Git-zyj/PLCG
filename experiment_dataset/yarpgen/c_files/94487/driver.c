#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7347565017528200836LL;
unsigned short var_9 = (unsigned short)39606;
long long int var_10 = 1539938454169383388LL;
unsigned char var_13 = (unsigned char)227;
int zero = 0;
long long int var_17 = -6059586730509068493LL;
signed char var_18 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
