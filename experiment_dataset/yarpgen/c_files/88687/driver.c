#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1193676143;
unsigned int var_2 = 1781399183U;
unsigned char var_3 = (unsigned char)214;
short var_6 = (short)28033;
unsigned int var_8 = 2693741847U;
signed char var_11 = (signed char)12;
unsigned short var_12 = (unsigned short)7743;
int zero = 0;
int var_13 = -1891668532;
unsigned short var_14 = (unsigned short)17498;
unsigned char var_15 = (unsigned char)36;
long long int var_16 = 2179182497367617576LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
