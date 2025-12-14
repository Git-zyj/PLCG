#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)58;
unsigned int var_7 = 1375980034U;
unsigned int var_14 = 1217901649U;
unsigned int var_18 = 113487810U;
int zero = 0;
signed char var_20 = (signed char)62;
unsigned long long int var_21 = 17279462260307244947ULL;
short var_22 = (short)-28221;
unsigned short var_23 = (unsigned short)34834;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
