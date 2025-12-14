#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6904;
unsigned long long int var_2 = 12767117751952615556ULL;
int var_4 = 808208781;
unsigned long long int var_5 = 13417456449774988748ULL;
unsigned char var_7 = (unsigned char)236;
unsigned long long int var_8 = 1614003752954107769ULL;
short var_9 = (short)4288;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)170;
unsigned char var_12 = (unsigned char)72;
unsigned short var_13 = (unsigned short)30403;
unsigned short var_14 = (unsigned short)25059;
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
