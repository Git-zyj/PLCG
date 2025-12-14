#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
short var_2 = (short)-24;
unsigned long long int var_6 = 13578133657889633220ULL;
int var_9 = -122481660;
unsigned long long int var_10 = 12784915668995916254ULL;
int zero = 0;
long long int var_11 = -4124213083788100422LL;
unsigned int var_12 = 1187837001U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
