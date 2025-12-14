#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1891706713;
unsigned char var_3 = (unsigned char)3;
unsigned short var_10 = (unsigned short)64286;
int zero = 0;
signed char var_11 = (signed char)44;
long long int var_12 = 5270871846010720217LL;
signed char var_13 = (signed char)30;
short var_14 = (short)8578;
unsigned int var_15 = 873571764U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
