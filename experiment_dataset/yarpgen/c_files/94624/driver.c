#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned long long int var_1 = 10379919073819219800ULL;
signed char var_2 = (signed char)-52;
signed char var_5 = (signed char)55;
unsigned long long int var_8 = 2843258532676702360ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)246;
long long int var_12 = -7604369456044898188LL;
signed char var_13 = (signed char)-12;
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
