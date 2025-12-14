#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
long long int var_1 = 1676999526595280488LL;
long long int var_3 = -4807172612045799594LL;
long long int var_4 = -4320243291442755500LL;
unsigned char var_7 = (unsigned char)138;
unsigned char var_10 = (unsigned char)22;
unsigned short var_14 = (unsigned short)20463;
int zero = 0;
unsigned int var_16 = 1851557860U;
int var_17 = -1401339529;
int var_18 = 1727237242;
int var_19 = 2052496323;
signed char var_20 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
