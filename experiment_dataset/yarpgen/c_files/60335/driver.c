#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
short var_4 = (short)-24257;
unsigned char var_9 = (unsigned char)93;
long long int var_10 = 6328749860373223087LL;
short var_16 = (short)-29001;
int zero = 0;
unsigned char var_19 = (unsigned char)241;
unsigned char var_20 = (unsigned char)244;
short var_21 = (short)1733;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
