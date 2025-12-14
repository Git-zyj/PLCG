#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1824848143;
unsigned int var_10 = 2163292484U;
unsigned char var_11 = (unsigned char)199;
int zero = 0;
unsigned int var_12 = 4143611504U;
unsigned long long int var_13 = 17011091257607917197ULL;
unsigned short var_14 = (unsigned short)55135;
unsigned char var_15 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
