#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21824;
int var_3 = -325945636;
short var_4 = (short)-21003;
short var_7 = (short)3645;
short var_9 = (short)6120;
short var_10 = (short)-5359;
unsigned char var_11 = (unsigned char)57;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)15067;
int var_14 = 1313070441;
int zero = 0;
short var_17 = (short)10039;
int var_18 = -702352984;
int var_19 = -863711345;
unsigned char var_20 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
