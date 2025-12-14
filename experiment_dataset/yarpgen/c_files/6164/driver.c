#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2878253936U;
unsigned int var_8 = 3100641300U;
unsigned short var_12 = (unsigned short)5305;
int zero = 0;
long long int var_14 = 2404770985075786513LL;
unsigned char var_15 = (unsigned char)62;
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
