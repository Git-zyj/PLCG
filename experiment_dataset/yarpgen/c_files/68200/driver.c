#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1446274579U;
int var_4 = 1898999181;
unsigned long long int var_7 = 17858594405943327705ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)165;
unsigned long long int var_19 = 5882274360956788188ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
