#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2042142742U;
signed char var_1 = (signed char)-3;
int var_2 = 672589330;
int var_3 = -1042905959;
unsigned short var_5 = (unsigned short)45393;
int zero = 0;
unsigned char var_12 = (unsigned char)111;
unsigned char var_13 = (unsigned char)243;
unsigned char var_14 = (unsigned char)111;
long long int var_15 = -9185730634624901400LL;
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
