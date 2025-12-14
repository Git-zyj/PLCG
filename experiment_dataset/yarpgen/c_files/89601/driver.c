#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)150;
unsigned int var_7 = 2014097231U;
long long int var_8 = 249940521454530418LL;
unsigned char var_12 = (unsigned char)189;
int zero = 0;
unsigned short var_19 = (unsigned short)24981;
long long int var_20 = -2537159513216924110LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
