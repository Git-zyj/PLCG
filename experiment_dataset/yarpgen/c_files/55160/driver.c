#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
signed char var_2 = (signed char)-115;
unsigned int var_5 = 348285968U;
unsigned long long int var_10 = 10866907214120820074ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)25366;
signed char var_21 = (signed char)-109;
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
