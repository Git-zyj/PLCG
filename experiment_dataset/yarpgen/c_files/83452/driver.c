#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
int var_2 = 641830941;
signed char var_4 = (signed char)-69;
long long int var_6 = -1274327005890756199LL;
short var_7 = (short)-26758;
unsigned int var_9 = 2788741247U;
long long int var_10 = -8706664900552256019LL;
signed char var_11 = (signed char)-42;
short var_12 = (short)6242;
long long int var_14 = -1186368089841891420LL;
unsigned char var_17 = (unsigned char)151;
int zero = 0;
unsigned short var_20 = (unsigned short)53999;
unsigned int var_21 = 3288265832U;
short var_22 = (short)-10806;
unsigned int var_23 = 246809511U;
short var_24 = (short)6876;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
