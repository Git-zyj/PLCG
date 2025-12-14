#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13652528269020833259ULL;
signed char var_14 = (signed char)-127;
unsigned short var_15 = (unsigned short)57619;
int zero = 0;
unsigned long long int var_17 = 13485285981682555360ULL;
unsigned long long int var_18 = 177023422658169618ULL;
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
