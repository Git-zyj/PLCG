#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28066;
unsigned char var_2 = (unsigned char)161;
int var_3 = 43512142;
short var_4 = (short)-8896;
unsigned char var_5 = (unsigned char)198;
unsigned char var_6 = (unsigned char)196;
short var_7 = (short)1871;
short var_8 = (short)6867;
unsigned char var_13 = (unsigned char)219;
int zero = 0;
int var_14 = -1751037118;
short var_15 = (short)9142;
short var_16 = (short)14816;
long long int var_17 = 2378230218703040401LL;
unsigned long long int var_18 = 15309474749601617628ULL;
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
