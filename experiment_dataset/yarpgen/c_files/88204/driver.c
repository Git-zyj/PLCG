#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16234;
long long int var_4 = 3078113559656126724LL;
short var_7 = (short)-29544;
short var_8 = (short)-8101;
long long int var_12 = -1869124364694758461LL;
int zero = 0;
unsigned int var_14 = 812113583U;
unsigned short var_15 = (unsigned short)11214;
unsigned char var_16 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
