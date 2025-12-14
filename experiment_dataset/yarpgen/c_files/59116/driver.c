#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -636393187;
unsigned long long int var_2 = 2022955034358951178ULL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-24465;
unsigned long long int var_6 = 2678663127495014604ULL;
unsigned char var_8 = (unsigned char)154;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)70;
int var_12 = -1511133328;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
