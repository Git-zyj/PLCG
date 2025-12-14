#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1832193218;
long long int var_4 = 6061346132635358152LL;
unsigned short var_7 = (unsigned short)37637;
unsigned short var_10 = (unsigned short)10368;
short var_11 = (short)-28698;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)55;
void init() {
}

void checksum() {
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
