#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24630;
unsigned char var_1 = (unsigned char)166;
unsigned char var_2 = (unsigned char)242;
unsigned long long int var_4 = 10695933394452061413ULL;
int var_5 = 316259713;
unsigned long long int var_6 = 11035671118176157370ULL;
unsigned int var_7 = 1133925188U;
unsigned long long int var_9 = 924971035849686305ULL;
int zero = 0;
int var_11 = -726242093;
unsigned long long int var_12 = 5408932233487192951ULL;
unsigned long long int var_13 = 10086466373992623752ULL;
unsigned long long int var_14 = 5381883702424756983ULL;
unsigned int var_15 = 420619652U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
