#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
long long int var_2 = 1132523588453844037LL;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)95;
long long int var_9 = 2251170037885640180LL;
unsigned long long int var_11 = 5269489116036258020ULL;
signed char var_12 = (signed char)9;
short var_13 = (short)-13270;
short var_14 = (short)-3203;
int zero = 0;
signed char var_15 = (signed char)120;
unsigned char var_16 = (unsigned char)90;
unsigned short var_17 = (unsigned short)26824;
void init() {
}

void checksum() {
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
