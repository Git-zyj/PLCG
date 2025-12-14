#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65313;
unsigned char var_4 = (unsigned char)3;
short var_7 = (short)22985;
int var_10 = -1731613993;
unsigned char var_13 = (unsigned char)18;
int zero = 0;
int var_16 = -1123625450;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 223597880575068824ULL;
unsigned int var_19 = 2566871962U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
