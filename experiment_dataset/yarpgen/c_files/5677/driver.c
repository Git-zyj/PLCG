#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1821826885U;
signed char var_7 = (signed char)62;
long long int var_11 = -1045746172376877267LL;
int zero = 0;
unsigned char var_20 = (unsigned char)188;
unsigned long long int var_21 = 9430339552001020225ULL;
long long int var_22 = -1097067788856226640LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
