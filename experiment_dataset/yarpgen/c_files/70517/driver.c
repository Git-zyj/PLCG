#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6354256913255866849LL;
short var_2 = (short)17192;
short var_7 = (short)-26745;
int zero = 0;
unsigned char var_11 = (unsigned char)0;
unsigned long long int var_12 = 6144892135356730581ULL;
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
