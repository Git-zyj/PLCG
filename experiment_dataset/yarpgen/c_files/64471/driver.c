#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1132813516U;
unsigned long long int var_4 = 13737825584760025184ULL;
short var_9 = (short)4609;
int zero = 0;
unsigned int var_11 = 1280895813U;
short var_12 = (short)-15531;
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
