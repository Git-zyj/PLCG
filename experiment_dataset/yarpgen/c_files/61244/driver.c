#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26851;
long long int var_6 = -2448493946390999411LL;
unsigned long long int var_8 = 13743350800040970943ULL;
int var_9 = 2052188248;
long long int var_12 = -9048107802346455518LL;
short var_14 = (short)17580;
unsigned short var_15 = (unsigned short)34324;
int zero = 0;
unsigned short var_16 = (unsigned short)3400;
signed char var_17 = (signed char)-77;
unsigned long long int var_18 = 16134851839983211367ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
