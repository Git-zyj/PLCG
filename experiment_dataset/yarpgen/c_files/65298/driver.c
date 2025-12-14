#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7699;
long long int var_1 = 7760119556907675231LL;
long long int var_2 = 4407518351386031634LL;
long long int var_3 = 1763527707682830331LL;
unsigned char var_4 = (unsigned char)83;
unsigned char var_6 = (unsigned char)33;
int zero = 0;
unsigned char var_10 = (unsigned char)205;
long long int var_11 = 279746290981706207LL;
long long int var_12 = 9065255348516580303LL;
long long int var_13 = -8651261026924272693LL;
unsigned char var_14 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
