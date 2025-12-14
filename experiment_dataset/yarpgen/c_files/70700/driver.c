#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_6 = (unsigned char)123;
unsigned long long int var_7 = 12494462442329267432ULL;
unsigned long long int var_14 = 9811514735373851556ULL;
int zero = 0;
short var_15 = (short)8748;
unsigned long long int var_16 = 4457720653830420865ULL;
void init() {
}

void checksum() {
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
