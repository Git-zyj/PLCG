#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 543790767;
unsigned short var_1 = (unsigned short)6540;
signed char var_2 = (signed char)77;
unsigned char var_3 = (unsigned char)199;
long long int var_4 = 4660453186280145421LL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)91;
signed char var_9 = (signed char)-36;
signed char var_10 = (signed char)98;
int var_11 = -1563066786;
int var_12 = 878196302;
short var_13 = (short)13556;
int zero = 0;
signed char var_14 = (signed char)39;
short var_15 = (short)-22740;
short var_16 = (short)21928;
short var_17 = (short)18188;
unsigned long long int var_18 = 7407104603126665512ULL;
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
