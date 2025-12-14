#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44771;
unsigned short var_7 = (unsigned short)28698;
short var_10 = (short)9781;
short var_11 = (short)5754;
unsigned short var_12 = (unsigned short)37492;
int zero = 0;
unsigned short var_13 = (unsigned short)63677;
unsigned short var_14 = (unsigned short)52133;
short var_15 = (short)11636;
unsigned short var_16 = (unsigned short)16507;
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
