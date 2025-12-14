#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-115;
unsigned char var_2 = (unsigned char)187;
int var_3 = -1225228114;
short var_4 = (short)-18775;
long long int var_6 = -6865384281851154582LL;
unsigned short var_8 = (unsigned short)9804;
short var_10 = (short)26941;
long long int var_13 = -5248821000368431415LL;
long long int var_15 = -2449894561922553097LL;
unsigned int var_16 = 2010195883U;
int zero = 0;
short var_18 = (short)-21900;
short var_19 = (short)8287;
long long int var_20 = -5984999338514316720LL;
int var_21 = -1162533825;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
