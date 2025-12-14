#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)217;
unsigned int var_9 = 2755221852U;
short var_11 = (short)-13492;
unsigned short var_13 = (unsigned short)18953;
int zero = 0;
int var_14 = 1322602857;
unsigned short var_15 = (unsigned short)4579;
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
