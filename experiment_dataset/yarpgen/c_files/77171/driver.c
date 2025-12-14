#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7256;
unsigned long long int var_1 = 5667430226136388438ULL;
long long int var_2 = 7910135772581797935LL;
unsigned char var_3 = (unsigned char)83;
_Bool var_4 = (_Bool)1;
short var_5 = (short)17157;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 770435070U;
int zero = 0;
unsigned int var_10 = 1504739686U;
unsigned char var_11 = (unsigned char)126;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
