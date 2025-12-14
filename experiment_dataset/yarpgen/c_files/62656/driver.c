#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11056;
int var_5 = 718277511;
unsigned char var_8 = (unsigned char)46;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 6552420912629969993ULL;
unsigned short var_13 = (unsigned short)29729;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
