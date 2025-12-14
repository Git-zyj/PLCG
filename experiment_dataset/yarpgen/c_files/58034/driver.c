#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1744318876;
unsigned long long int var_6 = 11076242892681195985ULL;
int var_8 = 143547999;
int var_10 = -71315674;
int var_12 = 1972835088;
int zero = 0;
unsigned long long int var_14 = 6638673422434383022ULL;
unsigned char var_15 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
