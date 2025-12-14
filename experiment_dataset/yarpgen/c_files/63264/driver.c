#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
int var_2 = 1196196440;
unsigned short var_6 = (unsigned short)57042;
long long int var_7 = -7627157227067838807LL;
signed char var_10 = (signed char)26;
int zero = 0;
unsigned int var_11 = 2614270269U;
unsigned char var_12 = (unsigned char)253;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-22728;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
