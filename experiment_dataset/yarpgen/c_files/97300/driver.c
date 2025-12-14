#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12011891942067658283ULL;
long long int var_1 = 1499608232908272298LL;
unsigned char var_2 = (unsigned char)229;
unsigned long long int var_3 = 4913150977496169463ULL;
unsigned char var_4 = (unsigned char)118;
signed char var_5 = (signed char)-63;
unsigned long long int var_7 = 3795738492382504201ULL;
unsigned int var_9 = 1831416276U;
short var_10 = (short)8085;
unsigned int var_11 = 1083631813U;
int zero = 0;
int var_12 = 907223916;
unsigned short var_13 = (unsigned short)17755;
unsigned short var_14 = (unsigned short)3310;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
