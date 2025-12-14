#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13516301229602143974ULL;
signed char var_4 = (signed char)-123;
unsigned short var_7 = (unsigned short)34912;
int zero = 0;
unsigned char var_12 = (unsigned char)6;
signed char var_13 = (signed char)122;
unsigned short var_14 = (unsigned short)20650;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
