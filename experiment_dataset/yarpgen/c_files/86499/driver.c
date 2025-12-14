#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 323652745U;
unsigned char var_9 = (unsigned char)208;
short var_11 = (short)-10049;
int var_19 = -1934385221;
int zero = 0;
long long int var_20 = 4458969380521851352LL;
int var_21 = 103292574;
unsigned short var_22 = (unsigned short)38519;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
