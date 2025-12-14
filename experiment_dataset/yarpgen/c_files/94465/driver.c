#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6894951845399309375LL;
unsigned int var_3 = 4286737268U;
long long int var_4 = 5380846708420213901LL;
int var_5 = -1157672428;
int zero = 0;
unsigned long long int var_10 = 16501885375765938640ULL;
short var_11 = (short)-19476;
signed char var_12 = (signed char)-82;
unsigned short var_13 = (unsigned short)62687;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
