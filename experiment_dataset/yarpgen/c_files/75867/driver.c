#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
unsigned char var_2 = (unsigned char)182;
short var_5 = (short)13584;
short var_6 = (short)21416;
signed char var_8 = (signed char)117;
short var_11 = (short)-1235;
unsigned long long int var_13 = 16266854345869618356ULL;
int zero = 0;
int var_14 = -1859520227;
short var_15 = (short)18169;
int var_16 = 124821810;
long long int var_17 = 3123758614223461509LL;
unsigned short var_18 = (unsigned short)46314;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
