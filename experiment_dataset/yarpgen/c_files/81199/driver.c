#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8791016843390196272ULL;
unsigned long long int var_8 = 48142197129645115ULL;
unsigned char var_11 = (unsigned char)192;
unsigned long long int var_13 = 16119546733785078332ULL;
int zero = 0;
signed char var_20 = (signed char)17;
signed char var_21 = (signed char)102;
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
