#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
long long int var_1 = 8141741074848973971LL;
unsigned long long int var_2 = 7001748222472064814ULL;
signed char var_3 = (signed char)115;
long long int var_4 = -1118890075376864943LL;
int var_6 = -1834310744;
long long int var_7 = -3757782660883254032LL;
int zero = 0;
unsigned short var_12 = (unsigned short)57172;
signed char var_13 = (signed char)30;
unsigned char var_14 = (unsigned char)162;
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
