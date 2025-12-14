#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6475315028331318143LL;
short var_2 = (short)-5124;
int var_3 = -426779903;
unsigned char var_5 = (unsigned char)110;
short var_6 = (short)7188;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3903580471U;
short var_13 = (short)-19967;
int zero = 0;
signed char var_14 = (signed char)21;
unsigned short var_15 = (unsigned short)61628;
int var_16 = 2031395411;
void init() {
}

void checksum() {
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
