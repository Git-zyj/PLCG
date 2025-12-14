#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13863223318044672564ULL;
int var_12 = 569170120;
unsigned short var_18 = (unsigned short)44989;
int zero = 0;
unsigned char var_19 = (unsigned char)36;
int var_20 = -1262354715;
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
