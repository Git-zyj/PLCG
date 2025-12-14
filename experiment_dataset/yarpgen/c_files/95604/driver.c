#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9141832295353955683LL;
unsigned char var_7 = (unsigned char)233;
unsigned char var_8 = (unsigned char)165;
int zero = 0;
unsigned int var_11 = 666809888U;
unsigned long long int var_12 = 14934074478296431601ULL;
unsigned long long int var_13 = 7910370215315571593ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
