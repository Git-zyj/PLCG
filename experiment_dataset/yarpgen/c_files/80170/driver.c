#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1348489823294428080ULL;
unsigned long long int var_8 = 10883451004851155479ULL;
unsigned short var_10 = (unsigned short)20325;
short var_11 = (short)11763;
unsigned short var_14 = (unsigned short)45141;
int zero = 0;
long long int var_15 = 4410672790975233956LL;
signed char var_16 = (signed char)-25;
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
