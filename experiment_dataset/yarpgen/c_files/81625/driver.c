#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3434;
signed char var_1 = (signed char)-61;
signed char var_3 = (signed char)-126;
unsigned char var_4 = (unsigned char)223;
unsigned short var_6 = (unsigned short)8783;
unsigned char var_7 = (unsigned char)64;
unsigned long long int var_8 = 10999268772208507159ULL;
unsigned int var_9 = 234625160U;
unsigned short var_10 = (unsigned short)46924;
unsigned char var_11 = (unsigned char)86;
int var_12 = -1672135105;
int zero = 0;
int var_13 = 1361863839;
unsigned char var_14 = (unsigned char)91;
signed char var_15 = (signed char)-127;
unsigned long long int var_16 = 8075807969156530133ULL;
long long int var_17 = 5541805484612869609LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
