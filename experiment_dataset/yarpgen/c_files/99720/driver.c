#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5917;
long long int var_4 = -2875325789550482464LL;
unsigned short var_12 = (unsigned short)28839;
int zero = 0;
unsigned short var_15 = (unsigned short)1868;
long long int var_16 = 3468492963201400943LL;
short var_17 = (short)15312;
unsigned short var_18 = (unsigned short)52494;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
