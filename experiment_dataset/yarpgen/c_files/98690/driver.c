#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1363314082U;
unsigned char var_4 = (unsigned char)31;
long long int var_5 = -8463270763791256969LL;
int var_6 = -1304601458;
short var_7 = (short)-10406;
short var_8 = (short)1651;
unsigned int var_11 = 3231110761U;
unsigned char var_13 = (unsigned char)94;
long long int var_16 = -6814493403441439098LL;
int zero = 0;
long long int var_18 = -1258045073326139964LL;
int var_19 = -252922448;
unsigned short var_20 = (unsigned short)62822;
void init() {
}

void checksum() {
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
